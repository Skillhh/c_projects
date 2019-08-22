#include <stdio.h>

int main(void)
{
	int n;
	int *p;

	n = 75;
	p = &n;

	printf("n = %d, &n = %p, p = %p\n", n, &n, p);
	printf("&p = %p", &p);
}
