#include<stdio.h>

int main(void){
	FILE *ifile;
	int done, num, message, N, sum;
	ifile = fopen("thirdfile.txt", "r");
	done = 0;
	N = 0;
/*	while(!done){
		message = fscanf(ifile, "%d", &num);
		if( message == EOF ){
			done = 1;
		}else{
			printf("I read %d from the file.\n", num);
			N++;
			sum += num;
		}

	}*/
	while(fscanf(ifile,"%d", &num) != EOF ){
		printf("I read %d from the file.\n", num);
		N++;
		sum += num;
	}
	printf("There are %d numbers in the file.\n", N);
	printf("The sum pof the numbers read is %d.\n", sum);
	printf("Average is %.2lf. \n", (double)sum/N);
	return 0;
}
