/* EXE2-5.C */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char buffer[256];

    printf("Enter your name and press <Enter>:\n");
    gets( buffer );

    printf("\n Your name has %d characters!\n", strlen( buffer ));

    return 0;
}