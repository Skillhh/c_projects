#include<ncurses.h>
#include<string.h>

int main(){
	initscr();
	start_color();
		
	attron(COLOR_PAIR(1));
	/*
	A_NORMAL
	A_STANDOUT
	A_REVERSE
	A_BLINK
	A_DIM
	A_BOLD
	A_PROTECT
	A_INVIS
	A_ALTCHARSET
	A_CHARTEXT	
	*/

	init_pair(1, COLOR_WHITE,COLOR_BLUE);

//	attron(A_INVIS);
	printw("This is some text.");
//	attroff(A_INVIS);


	/*
	COLOR_PAIR(n)
	COLOR_BLACK		0
	COLOR_RED		1
	COLOR_GREEN		2
	COLOR_YELLOW	3
	COLOR_BLUE		4
	COLOR_MAGENTA	5
	COLOR_CYAN		6
	COLOR_WHITE		7
	*/

	attroff(COLOR_PAIR(1));
	refresh();
	getch();
	endwin();

}
