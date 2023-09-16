#include<stdio.h>
void swap(int *m, int *n){

int temp;
temp = *m;
*m=*n;
*n= temp;

printf("\n\nAfter swap:\nThe first number: %d\nThe second number: %d", *m,*n);

}
int main(){
int x,y;

printf("Enter the first number: ");
scanf("%d", &x);
printf("Enter the second number: ");
scanf("%d", &y);

printf("\n\nBefore swap:\nThe first number: %d\nThe second number: %d", x,y);

swap(&x,&y);

return 0;
}
