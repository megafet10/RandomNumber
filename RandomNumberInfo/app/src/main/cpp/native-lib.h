//
// Created by Ka Min on 5/17/2020.
//
#include <jni.h>
#include <string>
#include <stdio.h>
#include <assert.h>

#define RANDOM_DEV "/dev/random"
#define URANDOM_DEV "/dev/urandom"
#define HWRANDOM_DEV "/dev/hw_random"

#ifndef RANDOMNUMBERINFO_NATIVE_LIB_H
#define RANDOMNUMBERINFO_NATIVE_LIB_H
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL
Java_net_vsmart_sec_randomnumberinfo_NativeUtils_stringFromJNI(
        JNIEnv* env,
        jobject /* this */);

unsigned long long getBigRandom();

#ifdef __cplusplus
}
#endif
#endif //RANDOMNUMBERINFO_NATIVE_LIB_H
