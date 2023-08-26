#include<stdio.h>
int main(){

int num;
printf("Enter a number: ");
scanf("%d", &num);

    if(num>=1){
    printf("The entered number is positive.");
    } else if(num<0){
       printf("The entered number is negative.");
    } else if(num==0){
        printf("The entered number is equal to zero.");
        } else {
        printf("Invalid input. please enter only numbers.");
    }

return 0;

}
