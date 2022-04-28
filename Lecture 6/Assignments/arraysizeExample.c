#include <stdio.h>

#define N 10


int main(void){
     int number[16];


    size_t n = sizeof(number)/sizeof(number[0]);
    printf("Total elements the array can hold is: %d\n",n);

    return 0;
}








