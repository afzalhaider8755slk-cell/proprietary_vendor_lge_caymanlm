#include <android/log.h>

#define LOG_TAG "dummy_fpsph"
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

extern "C" {

void fingerprint_powerhint_start() {
    ALOGI("dummy_fpsph: fingerprint_powerhint_start called. Skipping powerhint safely.");
}

void fingerprint_powerhint_end() {
    ALOGI("dummy_fpsph: fingerprint_powerhint_end called. Skipping powerhint safely.");
}

}
