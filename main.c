#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>
#include <string.h>
#include <windows.h>



int roll_dice(int max_num);
void sequence_roller(int count , int maxnum);
int main(){
    char command[] = "first roll : ";
    system("cls");
    while (1==1)
    {
        int max_num;
        int roll_count;
        printf(command);
        scanf(" %d %d",&roll_count, &max_num);
        system("cls");
        strcpy(command, "next roll: ");
        Sleep(1000);
        sequence_roller(roll_count, max_num);
    }
    
 return 0;
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