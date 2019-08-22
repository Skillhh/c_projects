#include<ncurses.h>

int main(void){
	initscr();
	addstr("Goodbye, cruel C programming!");
	
	getch();
	endwin();
	return 0;
}
