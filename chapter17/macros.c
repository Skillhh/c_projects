#include<stdio.h>
#include<ctype.h>

int get_int(void);

int main(){
	int x;

	x = get_int();

	printf("You entered %d.", x);

}

int get_int(void){
	int ch, i, sign = 1;

	/* Se salta cualquier espacio en blanco inicial */

	while(isspace( ch = getchar()))
		;

	/* Si el primer caracter es no numerico,
		lo desobtiene y regresa 0. */

	if(ch != '-' && ch != '+' && !isdigit(ch) && ch != EOF)
	{
		ungetc(ch, stdin);
		return 0;
	}

	/* Si el primer coracter en un signo de menos */
	/* ajusta el signo adecuadamente. */
	if(ch == '-')
		sign = -1;

	/* Si el primer caracter fue un signo de mas o de menos, */
	/* obtiene el siguiente caracter. */
	if(ch == '+' || ch == '-')
		ch = getchar();
	/* Le carcteres asta que se recibe uno que no es digito. */
	/* Aigna valores a i, multiplicados por la potencia adecuada de 10. */
	for(i = 0; isdigit(ch); ch = getchar())
		i = 10 * i + ( ch - '0');

	/* hae que el resultado sea egativo sign es negativo. */
	i *= sign;

	/* Si no ha econtrado EOF, se debe haber leido un caracter */
	/* que no es digito y por lo tanto hay que desobtenerlo */
	if( ch != EOF)
		ungetc( ch, stdin);
	
	/* Regresa el valor recibido. */
	return 1;

}
