#include <curses.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	initscr();
	clear();
	move(20,10);
	printw("hola");
	refresh();
	//sleep(2);
	getch();
	endwin();
    return 0;
}
