/* Declara a los apuntadores y arreglos multidimensionales */
#include<stdio.h>

int main(){
    int multi[2][4];

    printf("\nThe value  of (multi) = %u", multi);
    printf("\nThe value (multi + 1) = %u", (multi + 1));
    printf("\nThe address of multi[1] = %u", &multi[1]);
}