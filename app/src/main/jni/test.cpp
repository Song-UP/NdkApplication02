//
// Created by SongUp on 2018/2/12.
//wusong.com.ndkapplication02.util.NativeHelper

#include <jni.h>
#include <stdio.h>
extern "C"
{
    JNIEXPORT jstring JNICALL Java_wusong_com_ndkapplication02_util_NdkHelper_getFromJNI(JNIEnv *env,
            jobject obj){  //JNIEnv: 代表VM里面的环境，本地的代码可以通过该参数与Java进行操作
                //obj 定义JNI方法的类的一个本地引用（this）
        return env-> NewStringUTF("这是一个JNI");
        //上述代码是返回一个String类型的    字符串
    }
}

