#include <stdio.h>

int IsPrime(int m) {
    if (m <= 1) {
        return 0;
    }

    for (int i = 2; i*i <= m; i++) {
        if (m % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int m;
    printf("Enter a number: ");
    scanf("%d", &m);

    if (IsPrime(m)) {
        printf("%d = Prime number.\n", m);
    } else {
        printf("%d = NOT Prime number.\n", m);
    }
    return 0;
}
