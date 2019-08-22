#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;

	char s1[] = "cualquiera";
	char s2[] = "cuaLquiera";
	
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s2, s1));
	printf("%d\n", strcmp(s1, s1));

	return 0;
}
