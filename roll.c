#include  <stdio.h>
#include  <stdlib.h>
#include <string.h>
#include <windows.h>


unsigned char handle_input(int *count, int *die);
int roll_dice(int max_num);
void sequence_roller(int count , int maxnum);
int main(){
    char command[] = "first roll : ";
    unsigned char status = 0;
    system("cls");
    while (status == 0)
    {
        status = 0;
        int roll_count, max_num;
        printf(command);
       
        switch (scanf(" %dd%d",&roll_count, &max_num))
        {
        case 1 :
            printf("invalid input\ncorrect format numddice i.e 1d20\n");
             status = 1;
        break;
        case 2 :
            if (handle_input(&roll_count, &max_num)== 0){
                system("cls");
                strcpy(command, "next roll: ");
                Sleep(1000);
                sequence_roller(roll_count, max_num);
            }else{
                printf("input numbers cannot be negative or above 2147,483,646\n");
            }
        break;
            
        default:
            printf("something went wrong\n");
            status = 1;
        break;
        }
   
    }
    
 return 0;
}

unsigned char handle_input(int *count, int *die){
    unsigned char status =1;
    if (*count> 0 && *die >0 ){
        status = 0;
    }
    return status;
}

int roll_dice(int max_num){
    int result;
     result = (rand() % max_num) +1;
     
    return result;
}

void sequence_roller(int count , int maxnum){
    int sum_total ;
    for (int i = 0; i < count; i++)
    {
        int res = roll_dice(maxnum);
        printf("%d \n", res);
        sum_total = sum_total + res;
    }
    if (count >1){
        printf("total : %d \n", sum_total);
    }
}