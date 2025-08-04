#include <stdio.h>

float add_vat(float *exvat);
int main(){
    float exvat = 101;
    printf("exVAT = %f\n incVAT = %f \n", exvat, add_vat(&exvat));
    return 0;
}

float add_vat(float *exvat){

    return  *exvat + (15*(*exvat/100));
}