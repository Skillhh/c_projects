/* Copia de un Archivo */
#include<stdio.h>

int file_copy(char * oldname, char * newname);

int main(){

    char source[80], destination[80];

    /* Obtine los nombres de origen y destino */
    printf("\nEnter source file: ");
    gets(source);
    printf("\nEnter destination file: ");
    gets(destination);

    if(file_copy(source, destination) == 0 )
        puts("Copy operation successful.");
    else
        fprintf(stderr, "Error during copy operation.");

    return 0;
}
int file_copy(char * oldname, char * newname){

    FILE * fold, *fnew;
    int c;

    /* Abre el archivo fuente para lectura en modo binario */
    if(( fold = fopen(oldname, "rb")) == NULL)
        return -1;

    /* Abre el archivo de destino para escritura en modo binario */
    if((fnew = fopen( newname, "wb")) == NULL){
        fclose(fold);
        return -1;
    }

    /* Lee un byte a la vez de la fuente */
    /* sino ha llegao al fin del archivo */
    /* escribe el byte al destino. */

    while(1){
        c = fgetc( fold );

        if( !feof(fold))
            fputc(c, fnew );
        else
            break;
    }

    fclose(fnew);
    fclose(fold);
}