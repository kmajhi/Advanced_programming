#include <stdio.h>

int main() {
    int x[] = {1, 2, 3, 4};
    int y[] = {5, 6, 7};

    int lengthX = sizeof(x) / sizeof(x[0]);
    int lengthY = sizeof(y) / sizeof(y[0]);

    int mergedLength = lengthX + lengthY;
    int merged[mergedLength];

    for (int i = 0; i < lengthX; i++) {
        merged[i] = x[i];
    }

    for (int j = 0; j < lengthY; j++) {
        merged[lengthX + j] = y[j];
    }

    printf("Merged array elements are: [");
    for (int i = 0; i < mergedLength; i++) {
        printf("%d", merged[i]);

        if (i < mergedLength - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
