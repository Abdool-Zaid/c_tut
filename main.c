#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>
#include <string.h>
#include <windows.h>
int roll_dice(int max_num);

int main(){
    char command[] = "first roll : ";
    system("cls");
    while (1==1)
    {
        int max_num;
        printf(command);
        scanf("%d", &max_num);
        system("cls");
        strcpy(command, "next roll: ");
        Sleep(1000);
        printf("result : %d\n", roll_dice(max_num));
    }
    
 return 0;
}

int roll_dice(int max_num){
    int result;
    srand(time(NULL)); 
     result = rand() % max_num;
     if(result<1){
        result=1;
     }
    return result;
}
