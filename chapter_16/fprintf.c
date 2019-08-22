#include<stdio.h>
#include<stdlib.h>

void clear_kb(void);

int main(){

	FILE *fp;
	float data[5];
	int count;
	char filename[20];

	puts("Enter 5 floating pint numerical values.");

	for( count = 0;count < 5; count++ )
		scanf("%f", &data[count]);

	clear_kb();

	puts("Enter a name for the file: ");
	gets(filename);

	if((fp = fopen(filename, "w")) == NULL){
		fprintf(stderr, "Error openig file %s. ", filename );
		exit(1);
	}
	for( count = 0; count < 5; count++){
		fprintf(fp, "\ndata[%d] = %f", count, data[count]);
		fprintf(stdout, "\ndata[%d] = %f", count, data[count]);
	}
	fclose(fp);
	return 0;
}
void clear_kb(void){
	char junk[80];
	gets(junk);	
}
