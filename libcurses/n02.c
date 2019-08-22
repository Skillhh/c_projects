#include<ncurses.h>

int main(){

	char cadena[128];
	initscr();
	
	//move(5, 10);
	//printw("Escribe tu nombre\n");
	//clear(); //Elimina la anterior linea
	if(has_colors()){
		start_color();
		init_pair(1,COLOR_RED,COLOR_GREEN);

		mvprintw(4, 10, "Escribe la contraseña: \n");
		move(6, 10);
		//noecho(); // No permite ver lo que se escribe
		scanw("%s", cadena);
		move(7, 10);
		printw("Te llamas: %s", cadena);
	
		attron(COLOR_PAIR(1));
	}
	//sleep(3);
	//erase();
	refresh();
	getch();
	endwin();

	return(0);
}
