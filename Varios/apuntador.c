#include<stdio.h>
int main()
{
	//Inicializa y declara una varianble de tipo int
	int a = 5000;
	//Declara un apuntador a int
	int *p_a;
	//Inicializa p_a para que apunte a 'a' asigno la direccion 
	p_a = &a;
	
	// Acede la valor de  a Directa e indirectamente
	printf("\nDirect access, \"a\" %d", a);
	printf("\nIndirect access \"a\" %d\n", *p_a );
	//Accede a l direccion de a de dos maneras
	printf("\nDirect access, \"a\" %d", &a);
	printf("\nIndirect access \"a\" %d", p_a );
		
	return 0;
}