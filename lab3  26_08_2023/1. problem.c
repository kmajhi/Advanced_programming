//Problem number 1.

#include <stdio.h>

int main() {
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Even\tOdd\n");
    printf("__________\n");

    for ( i = 1; i<num; i++) {
        if(i%2==0){
            printf("%d", i);
        }

        else {
            printf("\t%d\n", i);
        }

    }
    return 0;
}
