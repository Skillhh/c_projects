#include<stdio.h>

int main()
{
    double  growth , currentPopulation =  1402, growth_rate = 7.0;

    int I_growth;

    growth = currentPopulation * (1 + (growth_rate/100));

    I_growth = (int) growth;

    printf("%d", I_growth);

}
/**
 * currentPopulation * (1 + (growth_rate/100))
 * Input: 123, 7.0
 * Output: 131
 **/
