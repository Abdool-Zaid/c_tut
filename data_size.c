#include <stdio.h>
#include <math.h>
int size_in_bits(int bytes);

int main (){
    short a = 0;
    unsigned short b = 0;
    int size_of_a =size_in_bits(sizeof(a));
    int size_of_b =size_in_bits(sizeof(b));
    printf("a = %d \nb = %d\n", size_of_a,size_of_b);
    printf("expected =%f\n", exp2(size_of_a));
    printf("expected min  =%f\n", 0 - (exp2(size_of_a)/2));


    return 0;
}

int size_in_bits(int bytes){
    return 8 * bytes;
}