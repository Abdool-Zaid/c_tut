#include  <stdio.h>

int main(){
 float exvat =0.0f;
    printf("enter exVAT amount ...\n");
    scanf("%f", &exvat);
    printf("incVAT= %f",(exvat+(15*(exvat/100))));
    return 0;
}