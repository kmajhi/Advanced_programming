#include<stdio.h>
int main(){

int element;
int *p;

scanf("%d", &element);
p = &element;

printf("Element is: %x \n", &element);
printf("Element is: %d", *p);


return 0;

}
