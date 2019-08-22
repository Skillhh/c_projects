#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = "Hello world";
	char *f = "worl";
	char *t;
	t = strstr(s, f);
	
	printf("%s", t);

	return (0);
}
