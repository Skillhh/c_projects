#include<ncurses.h>

int main(int argc, char **argv ){

	initscr();
	//raw();	
	//cbreak();
	noecho();

	int height, width, start_x, start_y;
	height = 10;
	width = 20;
	start_x = start_y = 10;

	WINDOW * win = newwin(height, width, start_x, start_y );
	refresh();
	
	char c = '+';

	//box(win, (int)c, 42);
	int left, right, top, bottom, tlc, trc, blc, brc;
	left = right = 103;
	top = bottom = 104; 
	tlc = trc = blc = brc = (int)c;	
	
	wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
	mvwprintw( win, 2, 3 , "My first box");
	wrefresh(win);

	getch();
	endwin();
}
