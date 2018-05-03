#include <jni.h>
#include <string>
#include <android/log.h>

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved)
{
    JNIEnv* env = NULL;
    jint result = -1;
    __android_log_print(ANDROID_LOG_INFO, "JNI_Onload", "      hello world      ");
    result = JNI_VERSION_1_4;
    return result;
}


extern "C"
JNIEXPORT void JNICALL
Java_io_appetizer_ndk_1helloworld_MainActivity_logloadso(JNIEnv *env, jobject instance) {
    __android_log_print(ANDROID_LOG_INFO, "System.out", "    JNI call Method logloadso()    ");
}