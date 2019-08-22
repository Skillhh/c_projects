#include<stdio.h>

int main(void){
	
	int N, i, number;
	FILE *ifile;
	
	ifile = fopen("myfile.txt", "r");

	fscanf(ifile, "%d", &N);

	printf("There are %d number in the file.\n", N);
	for(i = 0; i < N; i++){
		fscanf(ifile, "%d", &number);
	//	printf("I read %d from the file. \n", number);
		printf("%d ",number);
	}

	fclose(ifile);

	return 0;
}
