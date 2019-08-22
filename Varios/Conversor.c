#include<stdio.h>
 
double to_feet( double x );
double to_pounds( double x );
double to_fahrenheit( double x );

int main()
{
	int i, nVeces;
	double a, producto;
	char b;
	
	scanf( "%d", &nVeces );
	
	for ( i = 0; i < nVeces; i++ )
	{		
		scanf("%lf %c", &a, &b);	
		if( b == 'm'  )
		{		
			producto = to_feet(a);	
			printf("%.6lf ft\n", producto);
		}	
		if( b == 'g'  )
		{
			//scanf("%f %c", &a, &b);	
			producto = to_pounds(a);	
			printf("%.6lf lbs\n", producto);
		}
		if( b == 'c'  )
		{	
			//scanf("%f %c", &a, &b);	
			producto = to_fahrenheit(a);	
			printf("%.6lf f\n", producto);
		}
	}
	
}
double to_feet( double x )
{
	double producto = 0.0;
	
	producto = x / 0.3048;
	 
	return producto;
}
double to_pounds( double x )
{
	double producto = 0.0;
	
	producto = x * 0.002205;
	
	return producto;
}
double to_fahrenheit( double x )
{
	double producto = 0.0;
	
	producto = ( x * 1.8 ) + 32;
	
	return producto;	 
}
