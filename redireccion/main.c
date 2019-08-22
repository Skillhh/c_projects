#include <stdio.h>
#include <stdlib.h>

int main() {
    char buf[80];
    gets(buf);
    printf("The input was: %s", buf);

    return 0;
}