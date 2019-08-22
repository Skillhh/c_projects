#include <stdio.h>

char *_strcat(char *dest,  char *src);
int main(void)
{
 	
	char s1[98] = "Hello ";
     	char s2[] = "World!\n";
	/*
	char *p;

	p = _strcat(s1, s2);
	printf("%s", p);
	*/
	int i = 0, j;

	while (s1[i] != '\0')
	{
		i++;
	}
	
	//printf("%d", i);

	for ( j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[j];
	//	putchar(s1[c]);
		i++;
	}
	printf("%s", s1);
	return 0;	
}
char *_strcat(char *dest,  char *src)
{
	

}
