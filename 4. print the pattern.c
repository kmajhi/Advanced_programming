#include <stdio.h>

int main(){
    int rows;

    printf("Enter the number: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++){
        for(int j=i; j<=rows; j++){
            printf(" ");
        }

        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=rows-1; i>=1; i--){
        for(int j=i; j<=rows; j++){
            printf(" ");
        }

        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
