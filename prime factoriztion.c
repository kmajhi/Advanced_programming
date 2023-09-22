#include <stdio.h>

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("Prime factors are not defined for numbers less than 2.\n");
        return 0;
    }

    printf("Prime factors of %d are: ", number);

    for (int i = 2; i <= number; i++) {
        while (number % i == 0) {
            printf("%d ", i);
            number = number / i;
        }
    }

    return 0;
}
