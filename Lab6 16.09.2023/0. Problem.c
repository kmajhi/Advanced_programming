#include<stdio.h>

int fibonacci(int m){
if(m==1 || m==2){
    return m-1;
} else if(m==0){
    return m;
} else {
return fibonacci(m-1)+fibonacci(m-2);
}

}
int main(){
int x;
printf("Enter a number for Fibonacci series: ");
scanf("%d", &x);

int result = fibonacci(x);
printf("%d", result);

return 0;
}
