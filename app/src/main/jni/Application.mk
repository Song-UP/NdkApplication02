APP_ABI := armeabi
//最常见的是APP_ABI字段，指定需要基于那些CPU平台的.so文件
//最常见的平台armeabi x86 mips 其中移动设备主要基于armeabi
//默认情况下，Android平台回生成所有平台的.so文件，即同APP_armeabi x86 mips
//指定cpu平台类型后，回生成该平台的.so文件，即上述语句只会生成armeabi平台下的.so文件