#include <stdio.h>

int main(void)
{
	char a[] = "hello!!";
	
	printf("%s", a);

	int i = 0, j;
	char b = 'l';
	while (a[i] != '\0')
	{
		if ( a[i] == b )
			break;
		i++;
	}

	for (j = 0; a[i] != '\0'; i++, j++)
	{
		a[j] = a[i];
		a[j + 1] = '\0';
	}	
	printf("\n%s", a);
	return 0;

}
