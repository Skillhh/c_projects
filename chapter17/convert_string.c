#include<stdio.h>
#include<stdlib.h>

int main(){
	char buf[80];
	
	double d;
	
	while(1){
		printf("\nEnter the string to convert, blank to exit\n");
		gets(buf);
		
		if(strlen(buf) == 0) 
			break;
			
		d = atof(buf);
		
		printf("The converted value is %f.", d);
	
	}
	
	getch();
	return 0;

}
