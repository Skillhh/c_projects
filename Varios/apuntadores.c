/* Declara a los apuntadores y arreglos multidimensionales */
#include<stdio.h>

int main(){
    int multi[2][4];

    printf("\nmulti = %u", multi);
    printf("\nmulti[0] = %u", multi[0]);
    printf("\n&multi[0][0] = %u", &multi[0][0]);
}