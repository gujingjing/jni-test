 #include "jni_jni_JniUtils.h"

 JNIEXPORT jstring JNICALL Java_jni_jni_JniUtils_getJniString
         (JNIEnv *env, jclass) {
     // new 一个字符串，返回Hello World
     return env -> NewStringUTF("Hello World");
 }

