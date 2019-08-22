#include<stdio.h>
#include<time.h>

int main(){

	time_t start, finish, now;
	struct tm *ptr;
	char *c, buf1[80];
	double duration;

	/* Registra el tiempo en el que el inicia la ejecucion */
	start = time(0);

	/* Registra el tiempo actual con el metodo alterno de */
	/* llamar  a time() */
	time(&now);

	/* Convierte el valor time_t en una estructura tipo tm. */
	ptr = localtime(&now);

	/* Crea y despliega una cadena formateada con */
	/* el tiempo actual */

	c = asctime(ptr);
	puts(c);
	//getchar();

	/* Ahora usa la funcion strftime() para crear varias */
	/* versiones formateadas diferentes del tiempo */
	strftime(buf1, 80, "This is week %U of the year %Y", ptr);
	puts(buf1);
	//getchar();

	strftime(buf1, 80, "It is %M minutes past hour %I.", ptr);
	puts(buf1);
	//getchar();

	/* Ahora obtiene el tiempo actual y calcula la uracion del programa */
	finish = time(0);
	duration = difftime(finish, start);
	//printf("\nProgram execution time = %f seconds.", duration);
 
	/* Tambien despliega la duracion del programa en */
	/* centesimas de segundo usando clock() */
	printf("\nProgram execution time = %ld hundredths of sec.\n", clock());
	
}
