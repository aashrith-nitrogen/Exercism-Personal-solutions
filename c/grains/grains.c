#include "grains.h"

uint64_t square(uint8_t index){
    if (index < 1 || index > 64) {
        return 0;
    }
    uint8_t u_index = index - 1;
    uint64_t Ngrains = 1ULL << u_index;
    return Ngrains;
}

uint64_t total(void){
    return UINT64_MAX; // Also can be expressed as (1ULL << 64) - 1) 
}
    



