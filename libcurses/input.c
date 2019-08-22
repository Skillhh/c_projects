#include<ncurses.h>

int main(){
	char name[20];

	initscr();
	
	mvprintw(10, 20, "Hola");
	mvscanw(11,20, "%s", &name);
	mvprintw(12,20, "Mi nombre es: %s", name);
	refresh();
	getch();
	endwin();


}
