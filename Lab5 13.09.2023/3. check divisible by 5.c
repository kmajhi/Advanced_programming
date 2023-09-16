#include <stdio.h>

int CheckThisNumber(int m) {
    if (m % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int returnValue = CheckThisNumber(n);

    if (returnValue == 1) {
        printf("The number is divisible by 5.\n");
    } else {
        printf("The number is not divisible by 5.\n");
    }

    return 0;
}
