#include <stdio.h>
 
int main() {
    int num = -4;  // Example negative number
    int result = num >> 1;
 
    printf("Original number: %d\n", num);
    printf("After right shift: %d\n", result);
 
    if (result < 0)
        printf("Right shift is Arithmetic (sign bit preserved)\n");
    else
        printf("Right shift is Logical (zeros filled in)\n");
 
    return 0;
}