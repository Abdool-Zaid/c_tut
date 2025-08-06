#include <stdio.h>

int main(){
    int i;
    long l;
    long long ll;
    char c;
    // void v, *pv;
    float f;
    double df ;
    printf("size of i : %lld and its pointer : %lld\n ", sizeof(i), sizeof(&i));
    printf("size of l : %lld and its pointer : %lld\n ", sizeof(l), sizeof(&l));
    printf("size of ll : %lld and its pointer : %lld\n ", sizeof(ll), sizeof(&ll));
    printf("size of c : %lld and its pointer : %lld\n ", sizeof(c), sizeof(&c));
    printf("size of f : %lld and its pointer : %lld\n ", sizeof(f), sizeof(&f));
    printf("size of df : %lld and its pointer : %lld\n ", sizeof(df), sizeof(&df));
    // printf("size of void : %lld\n ", sizeof(void));
    printf("size of 100 : %lld\nsize of 0xffffffff : %lld\nsize of 0xffffffffff : %lld\n ", sizeof(100), sizeof(0xffffffff),sizeof(0xffffffffff));

}