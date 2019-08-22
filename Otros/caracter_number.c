#include <stdio.h>

int  main(void)
{	
	char a;
	char arr[]= ";lakslsas78943845snda,sndaek398980";
	char * p;
	
	p = &arr;

	int i, j, m, k, tmp;
	int num[] = {0,1,2,3,4,5,6,7,8,9};
	int n[1000];

	i = 0;
	m = 0;
		
	while (p[i] != '\0')
	{
		tmp = p[i] - 48;
		
		//printf("%d ", tmp);

		for (j = 0; j <= 10; j++)
		{
			if (num[j] == tmp)
			{
				printf("%d Es numero\n", tmp);
				n[m++] = tmp;
				n[m + 1] = '\0';
			}
		}
		
		i++;
		//printf("%d ", tmp);
	}

/*	
	for ( i = 0; i < 10 ;i++)
		printf("\n%d\n", num[i]);
*/
	printf("\n");

	printf("\nm = %d\n",m );
	printf("\ni = %d\n",i );

	printf("\n");
	for (k = 0;k < m; k++)
		printf("%d", n[k]);

	return (0);
}
