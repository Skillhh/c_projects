#include<stdio.h>
#include<strings.h>
#include<conio.h>

int main(){
	
	char str[]= "This is the test string.";

	printf("\nThe original string: %s", str);
	printf("\nCalling strrev(): %s", strrev(str));
	printf("\nCalling strrev() again: %s", strrev(str));
	printf("\nCalling strnset(): %s", strnset(str, '!', 5));
	printf("\nCalling strset(): %s", strset(str, '!'));

	getch();	
}
