#include <stdio.h>
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

    return 0;
}
