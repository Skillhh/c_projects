#include<stdlib.h>

int main(){

	char input[40];

	while(1){
	
	puts("\nInput the desired DOS command, blank to exit");
	
	gets(input);
	
	if( input[0] == '\0' )
		exit(0);
	
	system(input);

	}
}