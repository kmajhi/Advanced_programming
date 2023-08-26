#include<stdio.h>
int main(){
int num;

printf("Enter the integer number = ");
scanf("%d", &num );

for(int i=1; i<=num; i++){

        if(i%5==0){
        printf("%d ", i);
        }
}

return 0;
}
