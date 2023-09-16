#include<stdio.h>
void arithmeticCheck(int *m, int *n){
printf("\n\nEntered first number is: %d\nEntered second number is: %d \n\n", *m,*n);
}

void add(int *x, int *y){
    int sum = *x + *y;
    printf("Sum of the two numbers is: %d\n", sum);
}

void sub(int *x, int *y){
    int subtraction = *x - *y;
    printf("Subtraction of the two numbers is: %d\n", subtraction);
}

void mul(int *x, int *y){
    int multiplication = *x * *y;
    printf("Multiplication of the two numbers is: %d\n", multiplication);
}
void div(int *x, int *y){
    int division = *x / *y;
    printf("Division of the two numbers is: %d\n", division);
}
int main(){
int x,y;

printf("Enter the first number: ");
scanf("%d", &x);
printf("Enter the second number: ");
scanf("%d", &y);

arithmeticCheck(&x,&y);
add(&x,&y);
sub(&x,&y);
mul(&x,&y);
div(&x,&y);


return 0;
}
