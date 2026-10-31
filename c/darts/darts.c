#include "darts.h"
#include <math.h>

int score(coordinate_t posi){
    float pos = sqrtf(posi.x * posi.x + posi.y * posi.y);
    if(pos > 10.0f){
        return 0;
    }
    else if(pos > 5.0f){
        return 1;
    }
    else if(pos > 1.0f){
        return 5;
    }
    else{
        return 10;
    }
}
