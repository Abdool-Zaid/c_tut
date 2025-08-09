#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1) {  // Returns 1 if successfully read an integer
        printf("Valid integer: %d\n", num);
    } else {
        printf("Not a valid integer.\n");
    }
    return 0;
}