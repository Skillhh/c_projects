#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <dos.h>

int main(){
	
	int n = 0;
		
	while(1){
		
		printf("Hola");
		if( n == 100 )
			break;			
		n++;
		
		sleep(2);
	}
	
	printf( "Probrado el retardo de sleep");
	
	getch();	
	
}
