#include <stdio.h>

int CheckThisNumber(int function_variable) {
    if (function_variable % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int input_num;

    printf("Enter a number: ");
    scanf("%d", &input_num);

    int functionErnewVariable = CheckThisNumber(input_num);

    if (functionErnewVariable == 1) {
        printf("The number is divisible by 5.\n");
    } else {
        printf("The number is not divisible by 5.\n");
    }

    return 0;
}
