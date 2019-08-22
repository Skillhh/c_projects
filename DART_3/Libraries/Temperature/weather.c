#include<stdio.h>

double averageTemp(double *temps, int numOfTemps){
    double result = 0.0;

    int i;

    for(i = 0; i < numOfTemps; i++){
        result = result + temps[i];
    }
    result = result / (double) numOfTemps;
    return result;
}
void printAverage(double *temps, int numOfTemps){
    double average = averageTemp( temps, numOfTemps);
    printf("Average 7-day temperature: %.2lf\n", average);
}
