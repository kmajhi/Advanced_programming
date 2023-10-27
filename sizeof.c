#include<stdio.h>
int main(){
    int x []={1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(x)/sizeof(x[0]);

    printf("Size of the array is = %d", length);
    return 0;
}
