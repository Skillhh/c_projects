#include <stdio.h>

int main(void)
{
	int n, i;
	char *p;
	char a[]= "hello";
	p = &a;
	n = 5;
	int *ptr;
	
	ptr = &n;
	printf("n = %d\n", n);
	printf("&n with p = %p\n",&n);
	printf("&n with x = %x\n",&n);

	i = 0;
	while (*(p + i) != '\0'){
		printf("%c", *(p + i));
		i++;
	}
	//printf("p with p %p\n", p);
	//printf("p with x %x\n", p);
	printf("\n%d", *ptr);

	*ptr  = 10;

	printf("\n%d", *ptr);
	printf("\n%d", n);

	return (0);
}
