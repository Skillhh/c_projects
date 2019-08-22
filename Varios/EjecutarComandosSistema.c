#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char  comando[80];
	
	while(1){
		
		puts("Ingrese el comando a ejecutar o solo presione [Enter] para salir. ");
		gets( comando );
		
		if( comando[0] == '\0' )
			exit(0);
			
		system( comando );				
	}
	
}
