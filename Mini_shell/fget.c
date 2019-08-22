#include <stdio.h>
#include <stddef.h>
int main()
{
	char *line;
	size_t size = 1024;
	fgets(line, size, stdin);

	printf("%s", line);

	return(0);
}
