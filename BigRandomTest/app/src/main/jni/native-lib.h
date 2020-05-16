//
// Created by minhbq on 9/13/2018.
//

#ifndef T9NATIVE_NATIVE_LIB_H
#define T9NATIVE_NATIVE_LIB_H

#define JNI_VERSION_1_1 0x00010001
#define JNI_VERSION_1_2 0x00010002
#define JNI_VERSION_1_4 0x00010004
#define JNI_VERSION_1_6 0x00010006
#define JNI_VERSION_1_8 0x00010008
#define JNI_VERSION_9   0x00090000

#include <jni.h>
//#include <openssl/aes.h>
//#include <openssl/sha.h>
//#include "jni_config.h"
//#include "jni_log.h"
//#include "jni_err.h"
//#include "jni_msg_ctrl.h"

#ifdef __cplusplus
extern "C" {
#endif

//Java function call to C----------------------------------
JNIEXPORT void JNICALL Java_net_vsmart_vsec_bigrandomtest_NativeUtils_initLibJNI(
        JNIEnv *env,
        jobject instance);

JNIEXPORT jstring JNICALL Java_net_vsmart_vsec_bigrandomtest_NativeUtils_stringFromJNI(
        JNIEnv *env,
        jobject obj);

JNIEXPORT jint JNICALL Java_net_vsmart_vsec_bigrandomtest_NativeUtils_testAESJNI(
        JNIEnv *env,
        jobject obj);

JNIEXPORT jint JNICALL Java_net_vsmart_vsec_bigrandomtest_NativeUtils_testSHAJNI(
        JNIEnv *env,
        jobject obj);

///Callback function from C to Java----------
static void initGlobalJavaEnvironment(JNIEnv* env, jobject thiz);

void callToJavaAddLogger(const char* tag, int tag_len, const char* log, int len);

///Variable----------------------------------
static jmethodID s_method_addlogger_id; // method id of java function - verify data

#ifdef __cplusplus
}
#endif

#endif //T9NATIVE_NATIVE_LIB_H
