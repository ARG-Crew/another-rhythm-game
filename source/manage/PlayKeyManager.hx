package manage;

import controls.PlayerSettings;
import flixel.FlxG;

class PlayKeyManager {
    public static function manage() {
        var justPressed = FlxG.keys.justPressed;
        var pressed = FlxG.keys.pressed;

        if (justPressed.ESCAPE) {
            FlxG.switchState(new MainMenuState());
            FlxG.sound.music.stop();
        }
        if (justPressed.S) {
            FlxG.switchState(new SettingsState(true));
            FlxG.sound.music.stop();
        }
        if (justPressed.B) {
            PlayState.instance.botplay = !PlayState.instance.botplay;
        }
        if (PlayerSettings.current.controls.DEBUG_1) {
            FlxG.switchState(new NoteOffsetState(PlayState.songName));
        }
    }
}