#include<stdio.h>
int main(){

do{
        int num1, num2, num3;
        int sum=0;

        printf("Enter the first number=> ");
        scanf("%d", &num1);
        printf("Enter the second number=> ");
        scanf("%d", &num2);
        printf("Enter the third number=> ");
        scanf("%d", &num3);

        sum = num1+num2+num3;

        printf("Sum = %d", sum);
        printf("\n\n");

        }while(1);

return 0;

}
