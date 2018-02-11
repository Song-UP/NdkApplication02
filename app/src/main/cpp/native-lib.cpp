#include <jni.h>
#include <string>

extern "C"
jstring
Java_wusong_com_ndkapplication02_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
