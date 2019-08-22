#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main()
{
	int fd;
	char *buf;
	int line;
	int size = 1024;
	int rest;

/*	fd = open("mytext.txt", 3|2, 0600);

	if(fd == -1)
	{
		printf("Failed to create and open the file.\n");
		exit(1);
	}
	write(fd, "Hello World!\n", 13);
	read(fd, buf ,13);
	buf[13] = '\0';

	printf("%s", buf);

	close(fd);
*/

	//fd = open("requiescat", O_RDONLY);
	/* Read */
	
	fd = open("Requiescat", O_RDONLY);
	
	if(fd == -1)
	{
		printf("Failed to open and read the file.\n");
		exit(1);
	}

//	printf("%d", sizeof(fd));
//	read(fd, buf, size);
//	buf[size]= '\0';
	rest = read(fd, buf,size);
	buf[rest] = '\0';
	
	printf("%s", buf);
	printf("%d", rest);
	close(fd);

	return (0);
}

