#include<stdio.h>

int main(){

    int numbers[] = {4, -1, 8, 3, 0, -11};
    
    int *ptr;
    ptr = numbers + 2;
    ptr++;

    printf("%d\n", *ptr);
    //printf("Array conints %d %d, ... %d\n", array[0], array[1], array[5]);
   // printf("These are stored at %p %p ... %p\n", &array[0],&array[1],&array[5]);

return 0;


}
