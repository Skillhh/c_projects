#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int count_args(char **args);
char *_strcpy(char *dest, const char *src);
size_t _strlen(const char *s);

typedef struct args
{
	char * args;
	struct args * next;
} list_t;

int main()
{
	/* Create Proccess*/
	pid_t pid;
	/* getline */
	int gl, i, j, m;
	char *buf = NULL;
	char *line_cmd;
	int size = 1024;
	size_t num_line = 1024;
	/* user */
	char* username = getenv("USER");
	char curr_path[size];
	char *path = getcwd(curr_path,-1);

/* strtok */
	char *cmd;
	const char s[2] = " ";
	char *argv[size];
	
//	char *arg_path[size];
	int status;
//	char *args[] =/ {"/bin/ls", "-l",NULL};
	line_cmd = (char *) malloc(size * sizeof(char));
//		execve(args[0],args, NULL);
	while (1)
	{
	
		printf("\33[1;31m%s@miniShell\33[0m:\33[1;34m%s\33[0m$ ", username, path);
	
		if((gl = getline(&buf, &num_line, stdin)) == EOF)
		{
			kill(pid, SIGKILL);
			exit(0);
		}

		if(gl == -1)
		{
			perror("Error:");
			exit(3);
		}
		_strcpy(line_cmd, buf);
		cmd = strtok(line_cmd, s);
		for(i = 0; cmd != NULL; i++)
		{	
			argv[i] = cmd;
			cmd = strtok(NULL, s);
		} 
		pid = fork();
		if (pid == -1)
		{
			perror("Error:");
			exit(0);
		}
		if(pid == 0)
			execve(argv[0], argv, NULL);	
		else
		{				
			wait(&status);
			kill(pid, SIGKILL);
		}
	}
	free(buf);
	free(line_cmd);
	free(username);
	free(cmd);
	free(argv);
	return (0);
}
int count_args(char **args)
{
	int j = 0;
	while(args[j])
		j++;
	return(j);
}
char *_strcpy(char *dest, const char *src)
{
	size_t i, n = _strlen(src);	
	for(i = 0; i < n; i++)
		if (src[i] != '\n')		
			dest[i] = src[i];
		else
			dest[i] = '\0';
	return(dest);

}
size_t _strlen(const char *s)
{
	size_t i = 0;
	while(s[i])
		i++;
	return(i);
}
