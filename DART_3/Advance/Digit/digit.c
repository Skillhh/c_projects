#include <stdio.h>
#include <stdlib.h>
#include "libdigit.h"

struct digit {
    int num;
    struct digit *next;
};

int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("was modified in %d places.\n", changeThrees(start));

    printf("The new number is ");
    printNumber(start);
    freeNumber(start);

    return 0;
}


