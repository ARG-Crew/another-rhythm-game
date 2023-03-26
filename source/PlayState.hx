package;

import flixel.system.FlxSound;
import sys.io.File;
import haxeparser.HaxeParser;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.input.keyboard.FlxKey;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;

class PlayState extends MusicBeatState
{
    //BUTTONS
    var butts:FlxTypedGroup<FlxSprite>;

    // CUSTOM LEVELS
    public static var instance:PlayState;
    var hscript:HaxeParser = null;
    public var level:String = 'default';

    // CHARTS
    public var notes:Array<Dynamic> = [
        [0, 0, '']
    ];
    public static var songName:String = 'Tribute';
    public static var curDifficulty:String = 'normal';

    var inst:FlxSound;

    override function create()
    {
        persistentDraw = persistentUpdate = true;

        inst = new FlxSound().loadEmbedded(Paths.music('Tribute')).play();
        inst.volume = Settings.getMusicVolume();

        Palette.parse('assets/palette.json');

        add(new FlxSprite().makeGraphic(FlxG.width, FlxG.height, Palette.bg));
        
        butts = new FlxTypedGroup<FlxSprite>();
        add(butts);
        for (i in 0...9) butts.add(new Button(i, Settings.skin));

        parseChart(songName, curDifficulty);

        super.create();

        instance = this;
        hscript = new HaxeParser(Paths.hscript(level));
        hscript.addCallback('this', instance);
        hscript.callFunction('create', []);
    }

    override function update(elapsed)
    {
        var justPressed = FlxG.keys.justPressed;
        var pressed = FlxG.keys.pressed;

        if (justPressed.SEVEN)
            FlxG.switchState(new NoteOffsetState(songName));

        if (justPressed.ESCAPE)
            FlxG.switchState(new InitialState());

        if (justPressed.W)
            Settings.openWindow();

        // the sexiest easter egg code
        if (pressed.NUMPADONE && pressed.NUMPADFIVE && pressed.NUMPADSIX && pressed.NUMPADEIGHT)
            if (FlxG.random.bool(0.01)) FlxG.switchState(new TicTacToe());

        super.update(elapsed);

        hscript.callFunction('update', [elapsed]);
    }

    function parseChart(music:String, difficulty:String = 'normal')
    {
        var raw:Array<String> = File.getContent('assets/charts/$music/$difficulty.txt').split('\n');
        for (i in raw)
        {
            var note = i.split(' ');
            notes.push([Std.parseInt(note[0]), Std.parseFloat(note[1]), note[2]]);
            trace('' + Std.parseInt(note[0]) + ', ' + Std.parseFloat(note[1]) + ', ' + note[2]);
        }
    }
}
