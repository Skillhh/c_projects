#include <stdio.h>
#include <string.h>

int main(void)
{
	
	int i, j, count;
	char a1[] = "Hello";
	char b1[10] , tmp; 
	char *s;
	s = &a1;
/*
	printf("%s\n", a1);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if(i % 2 == 0)
		{
			tmp = s[i];
			b1[j] = tmp;
			b1[j + 1] = '\0';
			j++;		
		}			
		++i;
	}
	
//	j = 0;
	printf("i: %d\n", i);
	printf("j: %d\n", j);
//	count = j;
	i = 0;
	while ( i <= j)
	{
		tmp = b1[i];
		s[i] = tmp;
		s[i +1] = '\0';
		i++;	
	}

	
//	while (count >= 0)
//	{
//		tmp = a1[count];
//		s[j] = tmp;
//		count--;
//		j++;
//	}

*/
	printf("\n%s\n", s);
	
}
