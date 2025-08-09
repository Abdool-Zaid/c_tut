#include <stdio.h>
 
int main()
{
    float principal, rate, time;
 
    // Get user input
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time: ");
    scanf("%f",&time);
 
    float  simple_interest, amount;
 
    // Calculate simple interest and amount
    simple_interest = ((principal*rate*time)/100);
    amount = simple_interest + principal;
 
    // Print the output
    printf("Simple Interest = %f \nAmount = %f",simple_interest, amount);
    return 0;
}