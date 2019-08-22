#include<stdio.h>

int main(){

    int n = 9;

    n = n * 2 - 1;

    printf("  Feliz Navidad\n\n\n");

    for( int i = 1; i <= n; i += 2 ){
        for( int j = 1; j <=  n - i; j+= 2 ){
            printf(" ");
        }
        for( int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }
    for( int i = 1; i <= 4; i++ ){
        printf("      ****\n");
    }

    printf("\n\n");
}
