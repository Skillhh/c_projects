#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

ssize_t _getline(char **lineptr, size_t *n, FILE *stream);

int main()
{
	char *buf = NULL;
	size_t size = 1024;

	_getline(&buf, size, stdin);

	return (0);
}
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t rd = 0;
	
	lineptr = (char**) malloc(n);
	if (*lineptr == NULL)
		return(NULL);

	rd = read(stream, *lineptr, n);
	*lineptr[rd + 1] = '\0';

	return(rd);
}
