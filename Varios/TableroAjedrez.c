#include <stdio.h>

int main (int argc,char **argv)
{
   //Establecer variables
   int fila, n, columna;
   
   //Mensaje inicio
   printf("Introducir tamaño tablero: ");
   scanf("%d", &n);
   
   //Bucle para el tablero
   for(fila = 0; fila < n; fila++){  
        for(columna=0; columna < n; columna++) 
            if ( (fila + columna) % 2 == 0) { //si la columna es par ->Blanco
            printf("B");
         } else {
            printf("N");
            
         } 
        printf("\n");  
   }
   return 0;
}
