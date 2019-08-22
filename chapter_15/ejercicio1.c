#include<stdio.h>

int numero( int );

int (* func)( int );	

int main()
{	
	int num;
	float a;
	func = numero;
		
	scanf("%d", &num);
	
	a = func(num);

	printf("%f\n", a);

}
int numero( int n )
{
	float resultado = n;
	
	return resultado;
}

