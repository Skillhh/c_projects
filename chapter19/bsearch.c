/* Uso de qsort() y bsearch() con valores. */

#include<stdio.h>
#include<stdlib.h>

#define MAX 20

int  intcmp(const void *v1, const void *v2);

int main(){

	int arr[MAX], count, key, *ptr;

	/*El usuario teclea algun entero. */
	printf("Enter %d integer values; press Enter after each. \n", MAX );

	for( count = 0; count < MAX; count++)
		scanf("%d", &arr[count]);

	puts("Press a key to sort the values.");
	getchar();
	
	/* Ordena el arreglo de forma asendente */
	qsort( arr, MAX, sizeof(arr[0]), intcmp);

	/* Despliega el arreglo ordenado. */
	for(count = 0; count < MAX; count ++)
		printf("\narr[%d] = %d.", count, arr[count]);

	puts("\nPress a key to continue.");
	getchar();

	/* Se teclea una clave por buscar.*/
	printf("Enter a value to search for: ");
	scanf("%d", &key);

	/* Ejecute la busqueda. */
	ptr = (int * )bsearch(&key, arr, MAX, sizeof(arr[0]), intcmp);

	if(ptr != NULL)
		printf("%d found at arr[%d].", key, (ptr - arr));
	else
		printf("%d not found. ", key);
}
int intcmp(const void *v1, const void *v2){
	
	return ( * (int *) v1 - * (int * ) v2);

}
