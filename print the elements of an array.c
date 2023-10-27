#include <stdio.h>

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 15, 7, 8, 9, 10};
    int length = sizeof(x) / sizeof(x[0]);

    printf("The array elements are: [");
    for (int i = 0; i < length; i++) {
        printf("%d", x[i]);

        if (i < length - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
