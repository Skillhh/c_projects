#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	FILE * fp;
	//char * line;
	char line[255];
	char mode[4];
	int rline;
	/*
	//Escritura caracter por caracter
	fp = fopen("nota.txt", "w");
	while((rline = getchar()) != EOF){
		if( rline == -1 ){
		}
		else{
			fputc(rline, fp);
		}
	}	
	fclose(fp);*/
	
	//Escritura
	//line = (char * ) malloc(sizeof(char));
	fp = fopen("nota.txt", "w");
	if(fp == NULL ){
		fprintf(stderr, "Error al abrir el Archivo.");
	}else{
		printf("Ha creado el archivo correctamente.\n");
		printf("Escribe el texto: ");	
		gets(line);
		fprintf(fp,"%s",line);
		fclose(fp);
	}
	// Leyendo 
	fp = fopen("nota.txt", "r");
	/*
	if(fputs(fp,"%s",&line) == EOF ){
		printf("%s", line);
	}*/
	if(fp == NULL){
		fprintf(stderr, "Erro al intentar abrir el archivo." );	
	}else{
		while((rline = fgetc(fp)) != EOF){
			if( rline == '\n')
				printf("\n");
			else
				putchar(rline);
		}
		fclose(fp);
	}
	printf("\n");
	return 0;
}
