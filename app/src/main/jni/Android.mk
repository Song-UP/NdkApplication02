
//指定源码编译的配置信息
LOCAL_PATH := $(call my-dir)  //设置工作目录，my-dir返回Android.mk文件所在的目录
include $(CLEAR_VARS)   //清楚所有以LOCAL -- PATH开头的变量
LOCAL_MODULE := hello_jni  //设置末班的名称，即编译出来的.so文件名，注：要和上述build.gradle中Ndk节点设置的一样
LOCAL_SRC_FILES := test.cpp  //指定参与编译的c/c++源文件名
include $(BUILD_SHARED_LIBRARY)   //指定生成的静态库或者共享库在运行时依赖的共享库模块列表
