#include<stdio.h>

void half(void *x, char type);

int main(){

	/* Iniciaiza una variabl de cada tipo */
	int i = 20;
	long l = 100000;
	float f = 12.456;
	double d = 123.044444;

	/* Despliega los valores iniciales */
	printf("\n%d", i);
	printf("\n%ld", l);
	printf("\n%f", f);
	printf("\n%lf\n\n", d);

	/* Llama a half() para cada variable. */

	half(&i, 'i');
	half(&l, 'l');
	half(&f, 'f');
	half(&d, 'd');

	printf("\n%d", i);
	printf("\n%ld", l);
	printf("\n%f", f);
	printf("\n%lf\n", d);

}
void half(void *x, char type){
	
	/* Dependiendo del valor de type asigna el */
	/* apuntador a x adecuado y lo divide entre dos. */

	switch(type){
	
		case 'i':
			*((int *) x) /= 2;
		break;
		case 'l':
			*((long *)x) /= 2; 
		break;
		case 'f':
			*((float *)x) /= 2;
		break;
		case 'd':
			*((double *) x) /= 2;
		break;
	}

}
