#include<stdio.h>

struct entry{
    char fname[20];
    char lname[20];
    char phone[10];
};
/*Declara un arreglo de estructura*/
struct entry list[4];

int main()
{
    int i;

    /* hace un ciclo y recibe los datos de 5 personas */
    for( i = 0; i < 4; i++ )
    {
        printf("\nEnter first name: ");
        scanf("%s", list[i].fname);
        printf("\nEnter last name: ");
        scanf("%s", list[i].lname);
        printf("\nEnter number phone in 123-456 format: ");
        scanf("%s", list[i].phone);
    }

    /* Imprime dos lineas en blanco */
    printf("\n\n");

    /* Hae ciclo para desplegar los datos.*/
    for( i = 0; i < 4; i++ )
    {
        printf("Name: %s %s", list[i].fname, list[i].lname);
        printf("\t\tPhone: %s\n", list[i].phone);
    }

    return 0;
}
