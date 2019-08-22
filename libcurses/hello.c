#include<ncurses.h>

int main(int argc,  char **argv){

	initscr();
	
	move( 1, 10);
	printw("Hello World ");
	printw("%s\n", argv[1]);
	move(2, 10);	
	printw("%d Argumentos", argc);
//	refresh();
	getch();
	endwin();

}
