/** RANDOM.C - Demostracion del uso de un arreglo multidimensional **/

#include<stdio.h>
#include<stdlib.h>


int main()
{
	/* Declara un arreglo tridimensional con 1000 elementos */
	
	int random[1000];
	int a, cont;
	
	/* Llena el arreglo con numeros el azar la funcion de 
	biblioteca del C, rand(), regresaun numero al azar
	usa un ciclo for para cada subindice del arreglo */
	
	for( a = 0; a < 1000; a ++ )
	{		
	    random[a] = rand();  
        	
	}
	/* Ahora despliega los elementos del arreglo de 10 en 10 */

	for( a = 0; a < 1000; a ++ )
	{
		
        printf("%d   ", random[a]);
        cont++;
        if( cont == 10 )
        {
            system("pause");
            printf("\nPausa\n");
            cont = 0;
        }

    }
		
}
