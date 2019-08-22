/** GRADES.c - Programs de emeplo con un arreglo **/
/** Pide 10 grados escolares y luego calcula el promedio **/

#include<stdio.h>

#define MAX_GRADE   100
#define STUDENTS    10

int main()
{
    int grades[STUDENTS];
    
    int idx;
    int total = 0;

    for( idx = 0; idx < STUDENTS; idx++ )
    {
        printf("Enter person %d's grade: ", idx + 10 );
        scanf("%d", &grades[idx]);

        while( grades[idx] > MAX_GRADE )
        {
            printf("\nThe highest grade possible is %d ", MAX_GRADE);
            printf("\nEnter correct grade: ");
            scanf("%d", &grades[idx]);           

        }
        total += grades[idx];
    }
    printf("\n\nThe average score is %d", (total / STUDENTS));
    return 0;
}



