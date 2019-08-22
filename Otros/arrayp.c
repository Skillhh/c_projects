#include <stdio.h>

void print_array(int *a, int s);

int main(void)
{
	int c3[3][3] = {
		      {0, 1, 5},
		      {10, 11, 12},
		      {1000, 101, 102},
		      };

	print_array(c3, 3);

	return (0);
}
void print_array(int *a, int s)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; ; i++)
	/*
	for (i = 0, j = s; i < (s * s) -1 ; i+= (s + 1), j += (s - 1))
	{
		sum1 += a[i];
		sum2 += a[j];
	}*/
	printf("%d %d \n", sum1, sum2);
}
