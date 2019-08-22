/* Demuestra las variables lacales dentro de Bloques */

#include<stdio.h>

int main()
{
 /* Define unavariable local a main(). */

 int count = 0;

 printf("\nOutside the block , count = %d", count);

 /* Inicia Bloque. */

 {
    /* Define una variable local al bloque. */

    int count = 999;
    printf("\nWithin the block, count = %d", count);
 }

 printf("\nOutside the block again, count = %d", count);

}
