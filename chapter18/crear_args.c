#include<stdio.h>
#include<stdarg.h>
//#include<conio.h>

float average(int num, ...);

int main(){

	float x;

	x = average(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	printf("\nThe first average is %f. ", x);
	
	x = average(5, 121, 206, 76, 31, 5);
	printf("\nThe second average is %f. ", x);

//	getch();
}
float average(int num, ...){

	/* Declara una variable de tipo va_list. */

	va_list arg_ptr;
	int count, total = 0;

	/* Inicializa el apuntador a argumentos. */
	va_start(arg_ptr, num);

	/* Recupera cada argumento de lista*/
	for( count = 0; count < num; count++)
		total += va_arg(arg_ptr, int);

	/* Ejecuta la limpieza. */
	va_end(arg_ptr);

	/* Divide el total entre la cantidad de valores */
	/* para obtener la media aritmetica. Asigna el total a tipo */
	/* float para que el valor regresado sea tipo float.*/

	return ((float)total / num );

}
