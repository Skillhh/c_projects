#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	char ch, filename[50], mode[4];

	while(1){
		printf("\nEnter a filename: ");
		gets(filename);
		printf("\nEnter a mode (max 3 characters): ");
		gets(mode);

		if( (fp = fopen(filename, mode)) != NULL){
			printf("\nSuccessful openig %s in mode %s.", filename, mode );
			puts("\nEnter x to exit or any other to continue.");
			if((ch = getchar()) == 'x')
				break;
			else
				continue;
		}	
		else{
			fprintf(stderr, "\nError opening file %s in mode %s.\n", filename, mode);
			puts("\nEnter x to exit or any ather to continue.");
			if((ch = getchar()) == 'x')
				break;
			else
				continue;
		
		}	
	}
	return 0;
}
