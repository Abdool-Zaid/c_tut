#include <stdio.h>
void counter() {
    static int count = 0; // Retains value between calls
    count++;
    printf("Count: %d\n", count);
}
int main() {
    counter(); // Prints: Count: 1
    counter(); // Prints: Count: 2
    counter(); // Prints: Count: 3
    return 0;
}