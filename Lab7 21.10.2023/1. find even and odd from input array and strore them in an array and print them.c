#include <stdio.h>

int main() {
    int num[10];
    int even[10];
    int odd[10];

    int evenNum = 0;
    int oddNum = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0) {
            even[evenNum] = num[i];
            evenNum++;
        } else {
            odd[oddNum] = num[i];
            oddNum++;
        }
    }

    printf("Even numbers: [");
    for (int i = 0; i < evenNum; i++) {
        printf(" %d", even[i]);
    }
    printf(" ]\n");

    printf("Odd numbers: [");
    for (int i = 0; i < oddNum; i++) {
        printf(" %d", odd[i]);
    }
    printf(" ]\n");

    return 0;
}
