#include<stdio.h>
#include<ctype.h>

enum boolean{
	FALSE, TRUE
};

enum boolean vocal(char c);

void main(){
	
	char car;
	int numvocal =0;

	puts("\nIntroduce un texto. para terminar: INTO ");
	while((car = getchar()) != '\n'){
		if(vocal(tolower(car)))
			numvocal++;
	}
	printf("\n Total de vocales leidas: %d\n", numvocal);
}

enum boolean vocal(char c){
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return TRUE;
		default:
			return FALSE;	
	}

}
