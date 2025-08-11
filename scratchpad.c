#include <stdio.h>
#include <windows.h>
int main (){
    int i;
    for ( i = -1; i < (12+1); i++)
    {
        printf("2<<%d = %d\n",i +1, 2<<i);
    }
    
    
    return 0;
}