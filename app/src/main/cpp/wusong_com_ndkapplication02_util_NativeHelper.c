//
// Created by SongUp on 2018/2/11.
//

#include "wusong_com_ndkapplication02_util_NativeHelper.h"
#include <jni.h>
#include <android/log.h>
JNIEXPORT jstring JNICALL Java_wusong_com_ndkapplication02_util_NativeHelper_getAppkey(
        JNIEnv *env, jclass type
){
    char* app_key = "这是一个appkey";
    //生成Java中的字符串对象
    //指针的指针
    //env <=>NNINativeInterface **c语言
    return  (*env)->NewStringUTF(env, app_key);
}


JNIEXPORT void JNICALL
Java_wusong_com_ndkapplication02_util_NativeHelper_printLog(
        JNIEnv *env, jclass type, jstring str_
){
//    const char *str = (*env)->GetStringUTFChars(env, str_, 0);
//    //ToDo ：显示Android的日志
//    //调用Android的代码
//    //代码需要调用系统日志库，这个库需要在CMakeList.txt添加e
//    const char *tag = "这个一个tag";
//    jboolean b = JNI_FALSE;
//    const char* txt = (*env)->GetStringUTFChars(env, str_, b);
//    //打印log日志
//    __android_log_write(ANDROID_LOG_DEBUG, tag, txt);
//    //释放String
//    (*env)->ReleaseStringUTFChars(env, str_, str);


    const char *str = (*env)->GetStringUTFChars(env, str_, 0);
    //TODO: 显示Android 的日志
    // 调用Android的代码
    // 代码需要调用系统的日志库, 这个库已经在 CMakeList.txt添加了e,因此可以直接调用
    const char *tag = "NativeHelper";
    //jstring -> char*
    jboolean b = JNI_FALSE;
    const char* txt = (*env)->GetStringUTFChars(env, str_, b);
    //打印log日志
    __android_log_write(ANDROID_LOG_DEBUG, tag, txt);
    //释放string
    (*env)->ReleaseStringUTFChars(env, str_, str);

}
