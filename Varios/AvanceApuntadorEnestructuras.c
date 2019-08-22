#include<stdio.h>

#define MAX 4

struct part{
    int number;
    char name[10];
} data[MAX] = { 1, "Smith",
                2, "jones",
                3, "Adams",
                4, "Wilson"
                };

struct part *p_part;

int main()
{
    int count;

    p_part = data;

    for( count = 0; count < MAX; count++ )
    {
        printf("\nAt address %d: %d %s", p_part, p_part->number, p_part->name);
        p_part++;
    }

    printf("\n");
    return 0;
}
