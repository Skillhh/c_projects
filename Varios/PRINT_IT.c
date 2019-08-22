#include<stdio.h>
#include<stdlib.h>
void do_heading(char *filename);
FILE *prn;

int main( int argv, char *argc[])
{
 
 int line, page;
 char buffer[256];
 FILE *fp;
 

 if ( argv < 2 ) {
    fprintf( stderr, "\nProper usage is: ");
    fprintf( stderr,  "\n\n PRINT_IT filename.ext\n ");
    exit(1);    
 }

 if( ( fp = fopen( argc[1], "r") )==NULL)
 {
     fprintf(stderr, "Error opening file, %s!", argc[1]);
      exit(1);
 }
 
 page =0;
 line =1;
 do_heading( argc[1] );

 while( fgets(buffer, 256, fp ) != NULL )
 {
     if( line % 55 == 0 )
        do_heading( argc[1] );
    
     fprintf( stdprn, "%4d:\t%s", line++, buffer );
 }

 fprintf( stdprn, "\f");
 fclose(fp);
 return 0;
}

void do_heading( char *filename)
{
 page++;

 if( page > 1 )
    fprintf( stdprn, "\f");

 fprintf( stdprn, " Page: %d, %s\n\n", page, filename );
}