	/* Las funciones para la conversion de caracteres strlwr() y strupr() */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char buf[80];

	while(1){
		puts("Enter a line of text, a blank to exit");
		gets(buf);

		if( strlen(buf) == 0 )
			break;

		puts(strlwr(buf));
		puts(strupr(buf));
		
	}
	getchar();
	return 0;
}
