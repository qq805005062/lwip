#include "lwip/sys.h"
#include <chrono>

static std::chrono::time_point<std::chrono::steady_clock> sys_start_time;
static bool initialized = false;

void sys_init(void) {
    initialized = true;
    sys_start_time = std::chrono::steady_clock::now();
}

static long long
sys_get_ms_longlong(void){
    if(!initialized)
        sys_init();
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - sys_start_time).count();
}

u32_t
sys_jiffies(void){
    return (u32_t)sys_get_ms_longlong();
}

u32_t
sys_now(void){
    return (u32_t)sys_get_ms_longlong();
}