#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main()
{
	int fd;
	char buf[14];
	char *str;

	fd = open("mytext.txt", O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if(fd == -1)
	{
		printf("Failed to create and open the file.\n");
		exit(1);
	}
	if (str != NULL)
		write(fd, str, 5);
	else
		write(fd, "", 0);
//	read(fd, buf ,13);
//	buf[13] = '\0';

//	printf("%s", buf);

	close(fd);

	/* Read */
	fd = open("mytext.txt", O_RDONLY);

	if(fd == -1)
	{
		printf("Failed to open and read the file.\n");
		exit(1);
	}
	read(fd, buf ,13);
	buf[13] = '\0';

	printf("%s", buf);

	close(fd);

	return (0);
}

