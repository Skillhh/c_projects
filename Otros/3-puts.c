#include "holberton.h"
/**
* _puts - entry point
* Description: print a string
* @str: string of char
* Return: 0
*/
void _puts(char *str)
{
    int put = 0;
    while (*(str + put) != '\0')
    {
        _putchar(*(str + put));
            put++;
    }
        _putchar('\n');
}
