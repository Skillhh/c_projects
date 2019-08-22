#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct args
{
	char *arg;
	struct args * next;
} argv_t;

argv_t *add(argv_t **src, char **new);

int main(int argc, char *arg[])
{
	
	argv_t *args;
	

	char *args[] =/ {"/bin/ls", "-l",NULL};
	execve(args[0],args, NULL);
		
	

	return (0);
}
argv_t *add(argv_t *src)
{
	

}
