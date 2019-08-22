#include<ncurses.h>

main(){
	WINDOW *w;
	char list[5][7] = {"One", "Two", "Three", "Four", "Five" };
	char item[7];
	int ch, i = 0, width = 7;

	initscr(); //Inicializr Ncurse
	w = newwin( 7, 10, 1, 1); //Create a new window
	box(w, 0, 0); //Sets default borders

//Now print all Menu items and highligh the first.
	for( i = 0;  i < 5; i++ ){
		if( i == 0 )
			wattroff( w, A_STANDOUT ); //Hightlights th first item;
		else
			wattroff( w, A_STANDOUT );
		sprintf(item, "%-7s", list[i]);
		mvwprintw(w, i + 1, 2, "%s", item );
	}

	wrefresh( w ); //Update the terminal

	i = 0;
	noecho(); //Disable echoing of characters on the screen
	keypad(w, TRUE); //Enable keyboard input for the windows
	curs_set(0); //Hide the default screen cursos.

	//get Input
	while((ch = wgetch(w)) != 'q'){
		sprintf(item, "%-7s", list[i]);
		mvwprintw(w, i + 1, 2, "%s", item); 
		//Use variables to increment or drecrement
		
		switch(ch){
			case KEY_UP:
				i--;
				i = ( i < 0 ) ? 4 : i;
				break;
			case KEY_DOWN:
				i++;
				i = ( i > 4 ) ? 0 : i;
				break;
		}
		//Now hightlight the next item in the list.
		wattron(w, A_STANDOUT );

		sprintf(item, "%-7s", list[i]);
		mvwprintw(w, i + 1, 2, "%s", item);
		wattroff(w, A_STANDOUT);	
	}

	delwin(w);
	endwin();
}
