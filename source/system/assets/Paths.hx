package system.assets;

#if MODS
import sys.io.File;
import sys.FileSystem;
import system.assets.ModSystem.ModMetaData;
#end
import openfl.media.Sound;
import openfl.display.BitmapData;
import openfl.utils.Assets;

class Paths {
    static var loadedImages:Map<String, BitmapData> = [];
    static var loadedMusic:Map<String, Sound> = [];
    static var loadedSounds:Map<String, Sound> = [];
    static var loadedSongs:Map<String, Sound> = [];

    inline public static var soundExt:String = #if web "mp3" #else "ogg" #end;

    public static function clearMemory() {
        for (key in loadedImages.keys())
            loadedImages[key].disposeImage();

        for (key in loadedMusic.keys())
            loadedMusic[key].close();

        for (key in loadedSounds.keys())
            loadedSounds[key].close();

        for (key in loadedSongs.keys())
            loadedSongs[key].close();

        Assets.cache.clear();
        loadedImages = [];
        loadedSounds = loadedSongs = [];
    }

    public static function image(key:String, embed:Bool = false) {
        var image:BitmapData = null;
        if (!loadedImages.exists(key)) {
            image = embed ? Assets.getBitmapData('embed/images/$key.png') : #if MODS ModPaths.image('images/$key.png') #else null #end;
            if (image == null && !embed) image = AssetPaths.image('images/$key.png');

            loadedImages.set(key, image);
        }
        return loadedImages[key];
    }

    public static function sound(key:String, embed:Bool = false) {
        var sound:Sound = null;
        if (!loadedSounds.exists(key)) {
            sound = embed ? AssetPaths.sound('embed/sounds/$key.$soundExt') : #if MODS ModPaths.sound('sounds/$key.$soundExt') #else null #end;
            if (sound == null && !embed) sound = AssetPaths.sound('sounds/$key.$soundExt');

            loadedSounds.set(key, sound);
        }
        return loadedSounds[key];
    }

    public static function text(key:String, embed:Bool = false) {
        var text = embed ? AssetPaths.text('embed/$key') : #if MODS ModPaths.text(key) #else null #end;
        if (text == null && !embed) text = AssetPaths.text(key);

        return text;
    }

    public static function song(key:String) {
        var song:Sound = null;
        if (!loadedSongs.exists(key)) {
            song = #if MODS ModPaths.sound('songs/$key/$soundExt') #else null #end;
            if (song == null) song = AssetPaths.sound('songs/$key.$soundExt');

            loadedSongs.set(key, song);
        }
        return loadedSongs[key];
    }

    public static function video(key:String) {
        var video = #if MODS ModPaths.file('videos/$key.mp4') #else null #end;
        if (video == null) video = AssetPaths.file('videos/$key.mp4');

        return video;
    }

    public static function fragShader(key:String) {
        var fragShader = text('shaders/$key.frag');
        return fragShader;
    }

    public static function vertShader(key:String) {
        var vertShader = text('shaders/$key.vert');
        return vertShader;
    }

    public static function music(key:String, embed:Bool = false) {
        var sound:Sound = null;
        if (!loadedSounds.exists(key)) {
            sound = embed ? AssetPaths.sound('embed/music/$key.$soundExt') : #if MODS ModPaths.sound('music/$key.$soundExt') #else null #end;
            if (sound == null && !embed) sound = AssetPaths.sound('music/$key.$soundExt');

            loadedSounds.set(key, sound);
        }
        return loadedSounds[key];
    }

    public static function exists(key:String) {
        return AssetPaths.exists(key) #if MODS || ModPaths.exists(key) #end;
    }
}

class AssetPaths {
    public static function image(key:String) {
        return {
            if (exists(key))
                Assets.getBitmapData('assets/$key');
            else null;
        }
    }

    public static function sound(key:String) {
        return {
            if (exists(key))
                Assets.getSound('assets/$key');
            else null;
        }
    }

    public static function text(key:String) {
        return {
            if (exists(key))
                Assets.getText('assets/$key');
            else null;
        }
    }

    public static function file(key:String) {
        return {
            if (exists(key))
                Assets.getPath('assets/$key');
            else null;
        }
    }

    public static function exists(key:String) {
        return Assets.exists('assets/$key');
    }
}

#if MODS
class ModPaths {
    public static var mods:Map<String, ModMetaData> = [];
    public static var modsToCheck:Array<ModMetaData> = [];

    public static function image(key:String) {
        var bitmapData:BitmapData = null;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                bitmapData = BitmapData.fromFile('${mods[mod].path}/$key');
        }
        return bitmapData;
    }

    public static function sound(key:String) {
        var sound:Sound = null;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                sound = Sound.fromFile('${mods[mod].path}/$key');
        }
        return sound;
    }

    public static function text(key:String) {
        var text:String = null;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                text = File.getContent('${mods[mod].path}/$key');
        }
        return text;
    }

    public static function file(key:String) {
        var file:String = null;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                file = '${mods[mod].path}/$key';
        }
        return file;
    }

    public static function exists(key:String) {
        var exists:Bool = false;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                exists = true;
        }
        return exists;
    }
}
#end