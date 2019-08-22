#include<stdio.h>

void behind( int *, int);

int main(void){
    int array[10];
    int N, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%d", &array[i]);    
    }
    
    behind(array, N);
    printf("\n");

    for( i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
void behind(int *score, int players ){
    int i;
    int biggest = 0;

    for( i = 0; i < players; i++ ){
        if(*(score+i) > biggest)
            biggest=*(score+i);
    }
    
    for( i = 0; i < players; i++ ){
        *(score+i) -= biggest;
        *(score+i) *= -1;
    }
}
