#include <stdio.h>

int main(){
    int rows, i,j;

    printf("Enter the number: ");
    scanf("%d", &rows);
    for(i=1; i<=rows-5; i++){
            for(j=1; j<=rows; j++){
            printf("* ");
        }
        printf("\n");
    }
    for( i=1; i<=rows-2; i++){
            for(j=1; j<=rows-3; j++){
            printf(" ");
        }

        for(int j=1; j<=rows-4; j++){
            printf("* ");
        }
        printf("\n");

    }
    for(i=1; i<=rows-5; i++){
            for(j=1; j<=rows; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
