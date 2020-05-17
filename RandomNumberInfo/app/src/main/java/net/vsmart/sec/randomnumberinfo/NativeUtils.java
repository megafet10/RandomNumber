package net.vsmart.sec.randomnumberinfo;

import android.content.Context;

public class NativeUtils {
    Context mContext;

    public NativeUtils(Context context) {
        mContext = context;
    }

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native_util");
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}
