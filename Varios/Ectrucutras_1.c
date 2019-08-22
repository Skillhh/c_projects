#include<stdio.h>

struct coord{
	int x;
	int y;
};
struct rectangle{
	struct coord topleft;
	struct coord bottomrt;	
} mybox;

int main()
{
	int length, width;
	long area;
	
	/* Recibe las coordenadas*/
	printf("\nEnter the top left x coordinate: ");
	scanf("%d", &mybox.topleft.x);
	
	printf("\nEnter the top left y coordinate: ");
	scanf("%d", &mybox.topleft.y);
	
	printf("\nEnter the bottom right x coordinate: ");
	scanf("%d", &mybox.bottomrt.x);
	
	printf("\nEnter the bottom right y coordinate: ");
	scanf("%d", &mybox.bottomrt.y);
	
	/* Calcula la longitud y el ancho */
	
	width = mybox.bottomrt.x - mybox.topleft.x;
	length = mybox.bottomrt.y - mybox.topleft.y;
	
	/* Calcula y despliega el Área */
	area = width * length;
	printf("\nThe area is %ld units.", area);	
	  
	return 0;
}
