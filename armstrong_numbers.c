 
#include <stdio.h>
#include <math.h> 
 
int main()
{
    int number, sum = 0, rem = 0, cube = 0, temp;
 
    printf ("Enter a number:");
    scanf("%d", &number);
    temp = number;
    while (number != 0)  // loop will continue until the number is not 0.
    {
        rem = number % 10;  // This will calculate the last digit of the number.
        cube = pow(rem, 3); // The cube of the last digit will be calculated here.
        sum = sum + cube;
        number = number / 10; // Now our least significant bit of the number be removed.
    }
    if (sum == temp)
        printf ("The given number is an Armstrong number");
    else
        printf ("The given number is not an Armstrong number");
}