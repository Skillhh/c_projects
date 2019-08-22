/** RANDOM.C - Demostracion del uso de un arreglo multidimesional **/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    /* Declaracion de arreglo tridimensional ocn  100 elementos */

    int random[10][10][10];
    int a, b, c;
    
    /* Llena el arreglo con numeros al azar. Lu funcion */
    /* biblioteca del C, rand(), regresa un numero al azar */
    /* Usa un ciclo for para cada subindice del arreglo */

    for( a = 0; a < 10; a++ )
    {
        for( b =0; b < 10; b++ )
        {
            for( c = 0; c < 10; c++ )
            {
                random[a][c][b] = rand(); 
            }
        }
    }
    /* Ahora despliega los elementos del arreglo de 10 en 10 */

     for( a = 0; a < 10; a++ )
    {
        for( b =0; b < 10; b++ )
        {
            for( c = 0; c < 10; c++ )
            {
                printf("\nrandom[%d][%d][%d] = ", a, b, c);
                printf("%d", random[a][b][c]); 
            }
            printf("\nPress a key to continue, CTRL-C to quit.");
	    getch();
        }
    }

}/* Fin del Programa */
