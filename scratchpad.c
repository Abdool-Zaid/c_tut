#include <stdio.h>
<<<<<<< HEAD
 
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
=======
union bit_ex{
    unsigned char a:1;
    unsigned char b:1;
};


int main()
{
  union bit_ex u1;
  u1.b =0;
  u1.a = 1;
    printf("u1.a : %d\nu1.b : %d\n", u1.a,u1.b);
    printf("size of u1 : %lld\n", sizeof(u1));
    return 0;
}
>>>>>>> ad0ac73421d14a96bf51eac037427b0ee6381ddc
