#include<stdio.h>

char *message[5] = {"This", "is", "a", "short", "message."};

int main(void){

    int x;

    for( x = 0; x < 5; x++ )
        puts(message[x]);

    puts("And this is the end.");
}
