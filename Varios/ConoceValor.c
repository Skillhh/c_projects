#include<stdio.h>

int main(){

    int sum = 0;

    for( int i  = 4; i < 8; i++){
        if( i == 6 )
            continue;

        sum += i;
    }
    printf("%d", sum);

}
