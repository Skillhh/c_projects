#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char ch;
	
	while(1){
		printf("\nPress any kay on keyboard: ");
	
		ch = getchar();

		printf("\nACII code is: %d", ch);
		if( ch == 0 ){
			ch = getchar();
			printf("\nScan code: %d", ch);
	
		}
		system("clear");
	}
	return 0;
}
