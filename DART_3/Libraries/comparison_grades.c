#include<stdio.h>

int main(void){
	
	FILE *fp;
	int i = 0;
	int M = 0;
	double num;
	double numM[100];
	double nMax = 0;

	fp = fopen("gradeComparison.txt", "r");
	
	while(fscanf(fp, "%lf", &num) != EOF){
		numM[i] = num;
		i++;
	}
	int	count = 0;
	for(int j = 0; j < i; j++){
		if(numM[j] > nMax ){
			nMax = numM[j];
			M = j;
			count++;
			if(count == 2)
				break;
		}

	}

	if(numM[0] == nMax )
		printf("Yes\n");
	else
		printf("No %d\n", M + 1);
	
	fclose(fp);
	
	return 0;
}
