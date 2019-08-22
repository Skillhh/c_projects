#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char **argv){
	
	int i, compare,wholeNumber;
	double decimalNumber;

	printf("Ii have %d arguments from the command line: \n", argc);
	for(i = 0; i < argc; i++){
		printf("Arguments %d: %s\n", i, argv[i]);
	}
	if(argc == 4 ){
		compare = strcmp(argv[1], "-e");
		if(compare == 0 ){
			printf("argv[1] equals -e\n");
		}else{
			printf("argv[1] dos not equal -e\n");
		}
		wholeNumber = atoi(argv[2]);
		printf("%s as an integer is %d \n", argv[2], wholeNumber);
		decimalNumber = atoi(argv[3]);
		printf("%s as a double is: %lf\n", argv[3], decimalNumber);		
	}

	return 0;
}
