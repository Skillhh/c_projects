#include<stdio.h>

#define MAXSTRING 80

char message[] = "Display with putchar().";

int main(void){

    int count;

    for( count = 0; count < MAXSTRING; count++ ){
        if(message[count] == '\0' ){
            putchar('\n');
            break;
        }else{
            putchar(message[count]);
        }

    }

}
