package wusong.com.ndkapplication02.util;

/**
 * Created by SongUp on 2018/2/11.
 */

public class NativeHelper {
    static {
        System.loadLibrary("native-lib");
    }

    public static native String getAppkey();
    public static native void printLog(String str);

//    public native String stringFromJNI();

}
