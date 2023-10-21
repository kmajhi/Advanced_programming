#include <stdio.h>

int main() {
    int num[3];

    printf("Enter three numbers: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("Largest number = %d\n", num[2]);
    printf("Medium number = %d\n", num[1]);
    printf("Smallest number = %d\n", num[0]);


    return 0;
}
