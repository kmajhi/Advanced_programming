/* 2. Write a C program that takes a number as input from 
the user ad then send the number to a function named "find_the_sum". 
What the function does is, sum up all the numbers from 1 to that
number and returns that value. Use this as a recursive function. */

#include<stdio.h>

int find_the_sum(int m){

    if(m==0 || m==1){
        return m;
    }else if(m<=0){
        printf("Enter a natural number greater than 0");
    }else{
        return m + find_the_sum(m-1);
    }
}

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);


    int result = find_the_sum(x);
    printf("The sum is: %d\n", result);

    return 0;
}
