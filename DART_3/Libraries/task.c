#include<stdio.h>
#include<math.h>

int main(void){
    
    int num;
    double squared;
    double eConstant;

    scanf("%d", &num);
    
    squared = sqrt(num);
    printf("%.8lf\n", squared);
    eConstant = exp(1);
    printf("%.10lf\n", eConstant);
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra task.c -lm -o task && ./task\n");
    return 0;
}
