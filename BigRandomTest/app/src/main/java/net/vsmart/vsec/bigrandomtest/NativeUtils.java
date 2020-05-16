package net.vsmart.vsec.bigrandomtest;

public class NativeUtils {
    static {
        System.loadLibrary("native_util");
    }

//    private native String initNative();
    //--------Declare Native function----------
    public native String stringFromJNI () ;
    public native int testAESJNI();
    public native int testSHAJNI();
    public native void initLibJNI ();
}
