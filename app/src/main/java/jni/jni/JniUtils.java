package jni.jni;

/**
 *  * 作者：jingjinggu on 2017/11/14 17:24
 *  * 邮箱：gujj512@163.com
 *  
 */
public class JniUtils {

    static {
        System.loadLibrary("JNISample");
    }

    public static native String getJniString();
}
