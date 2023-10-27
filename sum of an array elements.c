#include<stdio.h>
int main(){
    int x []={1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(x)/sizeof(x[0]);
    int temp=0;

    for(int i=0; i<length; i++){
         temp = temp + x[i];
    }

    printf("Sum of the array is = %d", temp);
    return 0;
}
