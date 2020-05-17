#include "native-lib.h"
#ifdef __cplusplus
extern "C" {
#endif

jstring Java_net_vsmart_sec_randomnumberinfo_NativeUtils_stringFromJNI(JNIEnv *env, jobject) {
    char buff[128];
    unsigned long long rand =  getBigRandom();
    std::snprintf(buff, sizeof(buff), "Random=%lld",rand);
    return env->NewStringUTF(buff);
}

unsigned long long getBigRandom() {
    FILE *rdp;
    unsigned long long num;

    rdp = fopen(RANDOM_DEV, "rb");
    assert(rdp);

    assert(fread(&num, sizeof(num), 1, rdp) == 1);

    fclose(rdp);

    return num;
}

#ifdef __cplusplus
}
#endif