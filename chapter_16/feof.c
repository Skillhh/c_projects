#include<stdio.h>
#include<stdlib.h>

#define BUFSIZE 100

int main(){

	char buf[BUFSIZE];
	char filename[20];
	FILE *fp;

	puts("Enter name of text file to display: ");
	gets(filename);

	/* Abre el archivo para lectura */
	if((fp = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "Error opening file.");
		exit(1);
	}
	/* Si no ha llegado al fin de archivo lee una linea y la depliega */
	while(!feof(fp)){
		fgets(buf, BUFSIZE, fp);
		printf("%s", buf);	
	}
	fclose(fp);
}
