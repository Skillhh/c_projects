#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";

	int i = 0, j;
	char lr[] = "aA4eE3oO0tT7lL1"; 
	char tmp;

	while (s[i] != '\0')
	{
		for (j = 0; lr[j]; j++)
		{
			if( s[i] == lr[j])
				putchar(lr[j + 1]);
		}
		i++;
	}
	printf("%s", s);
	printf("%d", strlen(lr));

	return 0;
}
