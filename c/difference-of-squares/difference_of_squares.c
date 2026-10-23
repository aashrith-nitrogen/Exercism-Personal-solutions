#include "difference_of_squares.h"

unsigned int sum_of_squares(int number){
    unsigned int num = (number*(number+1)*(2*number + 1))/6 ;
    return num ;
}

unsigned int square_of_sum(int number){
    unsigned int num = (number*(number+1))/2 ;
    num *= num ;
    return num ;
}

unsigned int difference_of_squares(int number){
    unsigned int a = sum_of_squares(number) ;
    unsigned int b = square_of_sum(number) ;
    return (b-a); 
}