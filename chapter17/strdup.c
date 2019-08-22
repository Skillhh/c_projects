#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	char source[] = "The source string.";
	char * dest;
	
	if((dest = strdup(source)) == NULL){
		fprintf(stderr, "Error allcateing memory.");
		exit(1);	
	}

	printf("The destination = %s ", dest);

	return 0;
}
