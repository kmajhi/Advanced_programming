#include<stdio.h>
int main(){
  int x []={1,2,3,4,5};

  printf("Size of the array is = %d", sizeof(x)/sizeof(x[0]));
  return 0;
}
