#include<stdio.h>
#include<io.h>
#include<stdlib.h>

#define MAX 50

int main(){
    
    FILE *fp;
    int data, count, array[MAX];
    long offset;

    /* Inicando el arreglo */
    for( count = 0; count < MAX; count++ )
        array[count] = count * 10;

    /* Abre un archivo binario para escritura */
    if( ( fp = fopen("RANDOM.DAT", "wb")) == NULL){
        fprintf(stderr, "\nError opening file." );
        exit(1);
    }
    /* Escribir el arreglo al archivo y luego lo cierra */
    if( (fwrite( array, sizeof(int), MAX, fp)) != MAX ){
        fprintf(stderr, "\nError writing data to file.");
        exit(1);
    }
    fclose(fp);

    /* Abre el archivo para lectura */
    if((fp = fopen("RANDOM.DAT", "wb")) == NULL ){
        fprintf(stderr, "\nError opening to file.");
        exit(1);
    }
    /* Le pide al ususario que elemento quiere leer. Recibe el */
    /* elemento y lo despliega, terminando cuando se teclea -1 */
    while(1){
        printf("\nEnter  element to read, 0 -%d, -1 to quit: ",MAX-1);
        scanf("%ld", &offset);

        if(offset < 0 )
            break;
        else if ( offset > MAX-1)
            continue;
	/* Mueve el indicador de posicion al elelemnto especificado. */
	if((fseek(fp,(offset*sizeof(int)), SEEK_SET)) != NULL ){
		fprintf(stderr, "\nError using fseek.");
		exit(1);
	}
	/* Lee un solo entero */
	fread(&data, sizeof(int), 1, fp);

	printf("\nElemt %ld has value %d.", offset, data);

    }

	fclose(fp);
}

