#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fp;
	char filename[] = "myGrades.txt";
	int num;
	int number;
	int Num;
	
	fp = fopen(filename, "r" );
	
	while(fscanf(fp, "%d", &num) != EOF){
		Num = num;
	}
	fclose(fp);
	
	scanf("%d", &number);	
	if( number != Num ){
		fp = fopen(filename, "a");
		fprintf(fp, " %d", number);
		fclose(fp);
	}

	fp = fopen(filename, "r" );
	
	while(fscanf(fp, "%d", &num) != EOF){
		printf("%d ", num);
	}
	fclose(fp);

	printf("\n");
	
	return 0;
}
