#include<stdio.h>
void print_array(int **);
int main(){

    int a[3] = {1, 2, 3};
    
    int * ptr[1] =  {a};
    //int * ptr;

    //ptr = a;
    
    print_array(ptr);
    //printf("%d\n", *(ptr + 1) );


    return 0;
}
void print_array(int ** ptr){
    int i;
    
    for (i = 0; i < 3; i++ )
        printf("%d\n", *(*(ptr)+i) );

}
