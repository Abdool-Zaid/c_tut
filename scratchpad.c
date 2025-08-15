/*
 * C Program to Check Whether a Number is Prime or not using Loops
 */
 
#include <stdio.h>
#include <stdlib.h>

unsigned char is_prime( int *num); // holds logic to check for prime numbers
unsigned char check_input(int *num); // prechecks the inp to avoid using loops unnesessarily 
void get_num(int *num);
void show_results(unsigned char status, int *num); 
int main()
{
    int num;
    get_num(&num);
    
    // check_input(&num) == 0 ? is_prime(&num): exit(1); // checking input has nothing to do with program state hence it does not call exit()
        if (check_input(&num) == 0){
            is_prime(&num) == 0? show_results(0,&num):show_results(1,&num);
        } else{
            show_results(2,&num);
        }
    
}
void get_num(int *num){
    
    printf("Enter a number: \n");
    scanf("%d", num);
    
}
void show_results(unsigned char status, int *num){
    
    switch (status)
    {
    case 0:
    printf("%d is a prime number \n", *num);
        break;
    case 1:
    printf("%d is not a prime number \n", *num);
        break;
    case 2:
    printf("%d is not a prime number \nthe number must be greater than or equal to 2\n", *num);
        break;
    
    default:
        printf("something went wrong");
        break;
    }
    exit(1);

}

unsigned char check_input(int *num){
    unsigned char status= 1;
    if (*num <= 1)
    {
    }else{
        status =0;
    }
    

   return status;

}


unsigned char is_prime( int *num){
    unsigned char status= 1;
    int i, flag = 0;
    for (i = 2; i <= *num / 2; i++)
    {
        if ((*num % i) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        status= 0;

    return status;
}