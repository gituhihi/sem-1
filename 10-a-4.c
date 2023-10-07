#include <stdio.h>

int main() {
    int number;
    int digitCount = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number == 0) {
        digitCount = 1;
    } else {
        while (number != 0) {
            number /= 10; 
            digitCount++;
        }
    }

    printf("Number of digits: %d\n", digitCount);

    return 0;
}
