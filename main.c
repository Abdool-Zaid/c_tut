#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>

int roll_dice(int max_num){
    int result;
    srand(time(NULL)); 
     result = rand() % max_num;
     if(result<1){
        result=1;
     }
    return result;
}

int main(){
    while (1==1)
    {
        int max_num;
        printf("max number : ... \n");
        scanf("%d", &max_num);
        system("cls");
        printf("result : %d\n", roll_dice(max_num));
    }
    
 return 0;
}

