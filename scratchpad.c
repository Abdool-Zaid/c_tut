/*
 * C program to find whether a given year is a leap year or not
 *
 * status codes 
 * 0 == success
 * 1 == failure
 * 
 * authur Abdool Zaid
 *
 */
#include<stdio.h>
#include<ctype.h>


typedef unsigned char sts;
sts get_year();
sts is_leap_year();
void print_results(sts result);
int year; // outside main to be used as global 
int main()
{
    
    if (get_year() == 0){
        print_results(is_leap_year());
        
    }else{
        printf("please enter a valid year");
    }
    // isdigit(year) will use this later for checking that the user inputted a number


    
}
    
    
sts get_year(){
    // sts status =1;// TODO: use this when you have type checking 
    sts status = 0;
    printf("Enter a year \n");
    scanf("%d", &year);

    return status;
}

sts is_leap_year(){
    sts status = 2;
if ((year % 400) == 0)
            status = 0;
         else if ((year % 100) == 0)
            status = 1;
         else if ((year % 4) == 0)
            status = 0;
         else
            status = 1;
         
         return status;
        }
void print_results(sts result){

switch (result){
    case 0:
        printf("%d is a leap year \n", year);
    break;
            
    case 1:
        printf("%d is a not leap year \n", year);
    break;
              
    default:
        printf("something went wrong\n");
    break;
    }
            
}