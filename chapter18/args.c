#include<stdio.h>
#include<stdarg.h>

void mostrar_argumentos(int, ...);

int main(){

	mostrar_argumentos(4,1, 2, 3, 5 );

}

void mostrar_argumentos(int n, ...){

	va_list arg_ptr;

	int count = 0, i;

	va_start(arg_ptr, n);
	
	for(i = 0; i < n; i++){		
		count += va_arg(arg_ptr, int);	
	}

	va_end(arg_ptr);

	printf("%d",count);

}
