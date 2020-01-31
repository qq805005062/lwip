#include "lwip/sys.h"
#include <chrono>
#include <mutex>

static std::chrono::time_point<std::chrono::steady_clock> sys_start_time;
static bool initialized = false;
static std::recursive_mutex mtx;


sys_prot_t sys_arch_protect(void){
    mtx.lock();
    return 0;
}
void sys_arch_unprotect(sys_prot_t pval){
    (void)pval;
    mtx.unlock();
}

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