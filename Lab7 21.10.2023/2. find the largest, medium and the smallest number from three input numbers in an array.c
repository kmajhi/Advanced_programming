#include <stdio.h>

int main() {
    int num[3];

    printf("Enter three numbers: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }

    int largest = num[0];
    int medium = num[0];
    int smallest = num[0];

    for (int i = 1; i < 3; i++) {
        if (num[i] > largest) {
            largest = num[i];
        }
        if (num[i] < smallest) {
            smallest = num[i];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (num[i] != largest && num[i] != smallest) {
            medium = num[i];
            break;
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Medium number = %d\n", medium);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
