#include<stdio.h>

int main()
{
	float valor, tren[10];
	int  i, vagon;
	float PesoTren, PesoPromedio, PesoXvagon;
	
	scanf("%d", &vagon);
	
	for( i = 0; i < vagon; i++ )
	{
		scanf("%f", &valor);
		tren[i] = valor;
		PesoTren += tren[i];
	}
	PesoPromedio = PesoTren / vagon;
	//printf("%f", PesoPromedio);
	
	for(i =0; i < vagon; i++)
	{
		PesoXvagon = PesoPromedio - tren[i] ;
		printf("%.2f\n", PesoXvagon);
	}
	
	return 0;
}
