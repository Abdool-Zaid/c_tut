#include <stdio.h>
#include "add_VAT.h"

int main(){
    float exvat = 101;
    printf("exVAT = %f\n incVAT = %f \n", exvat, add_vat(&exvat));
    return 0;
}
