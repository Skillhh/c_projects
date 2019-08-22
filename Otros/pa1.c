#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, count, j;
//	char *str = "hola a todos ahora.";	
//	char **p = &str;
	char a[10] = "Holberton";
	char *p = &a;
	i = 0;
	
	while (a[i] != '\0')
	{
		i++;
	}
	count = i - 1;
	j = 0; 
	printf("%d\n", i);
	char ptr[i];
	
	for ( i = count; i >= 0; i--)
	{
		
		ptr[j] = a[i];
		printf("j %d %c\n", j, ptr[j]);
		printf("i %d %c\n", i, a[i]);
//putchar(a[j]);
		j++;
	}
	
	printf("%c\n", *(ptr + 0));
	printf("%s", a);
/*	while(*(*p + j) != '\n'  )
	{
		printf("%c", *(*p + j));
		j++;
	}*/
//	printf("%c",*(*p + 1));

	return (0);
}
