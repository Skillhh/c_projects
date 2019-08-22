#include<stdio.h>

int main(){
	char filename[80];

	printf("Enter current filename to delete: ");
	gets(filename);

	if(remove(filename) == 0)
		printf("The file %s has been deleted.\n", filename);
	else
		fprintf(stderr, "Error deleting the file %s.\n", filename);
	
	return 0;
}
