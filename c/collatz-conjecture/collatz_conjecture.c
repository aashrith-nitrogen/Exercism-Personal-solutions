#include "collatz_conjecture.h"

int steps(int start){

    if ( start <= 0){
        return -1 ;
    }
    
    int count = 0;
    while(start > 1){
        if (start % 2 == 0){
            start = start/2 ;
            count++; 
            continue;  
        }
        else if (start % 2 != 0){
            start =(start*3)+1 ;
            count++;
            continue;
        }
    }
    return count;
}