#include <stdio.h>

int main (){

    char arr[10]= {1,2,3,4,5,6,7,8,9,0};
    for (size_t i = 0; i < sizeof(arr); i++)
    {
        printf("%lld : %d\n", i, i[arr]);
    }
    
}