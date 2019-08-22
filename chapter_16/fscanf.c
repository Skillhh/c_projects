#include<stdio.h>
#include<stdlib.h>

int main(){	
	FILE * fp;	
	float f1, f2, f3, f4, f5;
	
	if( (fp = fopen("input.txt", "r" )) == NULL){
		fprintf(stderr, "Error opening file.");
		exit(1);
	}
	
	fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
		printf("The value %.2f %.2f %.2f %.2f %.2f\n", f1, f2, f3, f4, f5);
		

	fclose(fp);

	return 0;
}
