#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
	
	int plants;
	double dollars, cost;

	if( argc == 3){
		plants=atoi(argv[1]);
		dollars=atof(argv[2]);
		cost=plants * dollars;
		printf("%s plants for %s dollars eadch cost %.2lf", argv[1], argv[2], cost);	
	}else{
		printf("Invalid input.");	
	}

	return 0;
}
