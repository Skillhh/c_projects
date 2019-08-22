/* Uso de printf() */
#include <stdio.h>
#include <curses.h>

char *m1 = "Binary";
char *m2 = "Decimal";
char *m3 = "Octal";
char *m4 = "Hexadecimal";

int main() {

    float d1 = 10000.123;
    int n, f;

    puts("Outputting a number with different field widths.\n");

    printf("%5f\n", d1);
    printf("%10f\n", d1);
    printf("%15f\n", d1);
    printf("%20f\n", d1);
    printf("%25f\n", d1);

    puts("\nUse the * field witdh specifier to obtain field width");
    puts("for a variable in the argument list.\n");

    for (int n = 5; n <= 25; n++) {
        printf("%*f\n", n, d1);
    }

    puts("Display in octl, decimal, and hexadecimal.");
    puts("Use # to precede Octal and hex output with 0 and 0X");
    puts("Us  - to left-justify each value in its field.");
    puts("First display colum labels.\n");

    printf("%-15s%-15s%-15s", m2, m3, m4);

    for (n = 1; n < 20; n++) {
        printf("\n%-15d%-#15o%-#15X", n, n, n);
    }

    puts("\n\nUse the %n conversion command to count characters.\n");
    printf("%s%s%s%s%n", m1, m2, m3, m4, &n);
    printf("\n\nThe last printf() output %d characters.", n);

    return 0;
}