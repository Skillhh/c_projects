#include<stdio.h>
#include<stdlib.h>

int main()

{

	printf("\n\e[32;5m Hello World \e[0m\n" );

	for(int i = 0; i < 20; i++ ){
		printf("\e[35 | \e[0m");
		sleep(1);
	}

	return 0;

}
