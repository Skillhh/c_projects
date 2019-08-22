#include<stdio.h>

int main(void){
	
	int N;
	FILE * ofile;
	char filename[] = "outfile.txt";

	ofile = fopen(filename, "w");
	
	do{
		printf("Please enter a grade. Enter -1 to quit\n");
		scanf("%d", &N);
		if( N != -1)
			fprintf(ofile, "%d ", N);
	}while(N != -1);

	fclose(ofile);
	return 0;
}
