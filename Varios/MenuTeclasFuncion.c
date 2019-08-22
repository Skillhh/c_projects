#include<stdio.h>
#include<conio.h>
#include<time.h>

int fn_key(void);
int menu(void);

int main(){
	
	/* Ajusta el ciclo infinito */
	
	while(1){
		
		/*  Switch basado en el retorno del menu*/
		
		switch(menu()){
			
			case _KB_F1:
				puts("Task 1");
				break;
			case _KB_F2:
				puts("Task 2");
				break;
			case _KB_F3:
				puts("Task 3");
				break;
			case _KB_F4:
				puts("Task 4");
				break;
			case _KB_F5:
				puts("Task 5");
				break;
			case _KB_F6:
				puts("Task 6");
				break;
			case _KB_F7:
				puts("Task 7");
				break;
			case _KB_F8:
				puts("Task 8");
				break;
			case _KB_F9:
				puts("Task 9");
				break;
			case _KB_F10:
				puts("Exiting program... ");
				exit(0);
		}
	}
	
}

int menu(void){
	
	/* Despliega el menu */	
	
	puts( "\nF1 -> task 1" );
	puts( "F2 -> task 2" );
	puts( "F3 -> task 3" );
	puts( "F4 -> task 4" );
	puts( "F5 -> task 5" );
	puts( "F6 -> task 6" );
	puts( "F7 -> task 7" );
	puts( "F8 -> task 8" );
	puts( "F9 -> task 9" );
	puts( "F10 -> exit\n" );
	
	/* Obtiene una operacion de la tecla funcion */

	return ( fn_key());	
}

int fn_key(void){
	
	int ch;
	
	while(1){
		
		/* Espera hasta que llegue un byte cero. */
		
		while( (ch = getch()) != 0 ){
			
			/* Obtiene el siguiente caracter */
			
			ch = getch();
			
			/* Es teca funcion? */
			
			if( ch >= _KB_F1 && ch <= _KB_10 )
				return ch;
		}
		
	}
	
}






