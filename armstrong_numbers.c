 
#include <stdio.h>
#include <math.h> 

unsigned char handle_imput(int *usr_inp);

int main()
{
    int number, sum = 0, rem = 0, cube = 0, temp;

    
    printf ("Enter a number:");
     if (scanf("%d", &number) == 1) {  // check for character inputs
        if (handle_imput(&number) == 0){ // check that input is within range

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
    } else{
        printf("please enter a valid number\n");
    }

    }
    
    
    unsigned char handle_imput(int *usr_inp){
        unsigned char status_code =1; 
        printf("user inp = %d\n",*usr_inp );
        
        if (*usr_inp<0) // no negative numbers
        {
           printf("invalid selection\nno negative values allowed\n"); 
        }else if (*usr_inp==0) //scanf does not allow no input but we still need to check for 0
        {
        printf("invalid selection\nzero is not allowed\n"); 
        }
        else if (*usr_inp>2147000000 ){ //since 2147483647 is the max we aim a bit lower
            printf("invalid selection\n value must be less than 2147000000\n"); 
        }

        else{
            status_code = 0;
        }
        

        return status_code;
    }
    
   