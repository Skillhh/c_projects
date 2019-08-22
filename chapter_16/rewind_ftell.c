#include<stdio.h>
#include<stdlib.h>

#define BUFLEN 6

int main(){

	char msg[] = "abcdefhijklmnopqrstvwxyz";	

	FILE * fp;
	char buf[BUFLEN];
	
	if((fp = fopen("BUF_TEXT.txt", "w")) == NULL){
		fprintf(stderr, "Error openig file.");
		exit(1);
	}
	if(fputs(msg, fp) == EOF ){
		fprintf(stderr, "Error writing to file.");
		exit(1);
	}

	fclose(fp);

/* Abre el archio para lectura */

	if((fp = fopen("BUF_TEXT.txt", "r")) == NULL){
		fprintf(stderr, "Error opening file.");
		exit(1);
	}
	printf("\nInmediately after opening position = %ld", ftell(fp));

/* Lee cinco caracteres */

	fgets(buf, BUFLEN, fp);
	printf("\n\nAfterreading in %s, and position now = %ld", buf, ftell(fp));
	
/* Lee los sigueinte 5 caracteres */

	fgets(buf, BUFLEN, fp);
	printf("\n\nThe next 5 characters are %s, and position now = %ld", buf, ftell(fp));
	
/* Regresa al inicio del flujo */
	rewind(fp);
	printf("\n\nAfter rewinding the position is back at %ld", ftell(fp));
	
/* Lee cinco caracteres. */
	fgets(buf,BUFLEN, fp);
	printf("\nand reading starts at the beginning again: %s\n", buf);

	fclose(fp);

	return 0;
}
