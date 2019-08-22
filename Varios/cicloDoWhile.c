#include <stdio.h>

int get_menu_choice( void );

int main()
{
 int choice;

 choice = get_menu_choice();

 printf("\nYou chose Menu option: %d\n", choice);

}
int get_menu_choice( void )
{
 int selection;
 
 do
 {
  printf( "\n" );
  printf( "\n1 - Add a Record" );
  printf( "\n2 - Change a record" );
  printf( "\n3 - Delete a record" );
  printf( "\n4 - Quit" );
  printf( "\nEnter a selection: " );

  scanf( "%d", &selection );


 }while( selection < 1 || selection > 4  );

 return selection;

}
