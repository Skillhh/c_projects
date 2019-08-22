#include<ncurses.h>
#include<stdio.h>
#include<stdlib.h>

void linea_horizontal(int a, int b);
void linea_vertical(int a, int b);

int main(){
	
	initscr();

	int x, y;
	int a=5 ,b=10;

	move( a, b);
	printw("Escribie el alto del cuadrado: ");
	scanw("%d",&x);
	move( a+1, b);
	printw("Escribe el ancho del cuadrado: ");
	scanw("%d", &y);
	
	clear();
	linea_horizontal( x, y);
	linea_vertical( x, y);	

	refresh();
	getch();
	endwin();
}
void linea_horizontal( int a, int b){
	
	int i;
	char c;
	 
	c = 95;

	for(i = 1; i <= a; i++){
		// Linea vertical
		move( 1, i);
		printw( "%c", c);
		move( b, i);
		printw("%c", c);
	}
}
void linea_vertical( int a, int b){
	int i;
	char c;

	c = 124;

	for(i=2; i <= b; i++){
		// Linea verticar izquierda
		move(i, 1);
		printw("%c", c);
		move(i,a);
		printw("%c", c);	

	}
}
