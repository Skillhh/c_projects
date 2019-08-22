#include<stdio.h>

int main(){

	int i, number, add, N;
	float averGrade;

	FILE * fp;

	fp = fopen("studentGrades.txt", "r");

	fscanf(fp, "%d", &N);
	
	//printf("%d", N);
	for( i = 0; i < N; i++){
		fscanf(fp,"%d", &number);
		add += number;
	}
	averGrade = add / N;
	printf("%.2f", averGrade);

	fclose(fp);

	return 0;
}
