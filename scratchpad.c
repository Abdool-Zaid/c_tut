#include <stdio.h>
int main()
{
char str1 = "Helloworld ";
char str2 = "Hello";
 int len = strspn(str1, str2);
printf("Length of initial segment matching %d\n", len );
}