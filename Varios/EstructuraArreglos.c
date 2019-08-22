#include<stdio.h>

struct datos{
    float amount;
    char fname[30];
    char lname[30];
}rec;

int main()
{
    /* Recibe los datos del teclado */
    printf("Enter the donor\'s first and last name,\n ");
    printf("separated by a space:  ");
    scanf("%s %s", rec.fname, rec.lname);

    printf("\nEnter the donatio amount: ");
    scanf("%f", &rec.amount);

    /*
    Desplega informacion.
    Nota: %.2ff especifica un valor de punto flotante
    a ser desplegado con dos digitos a la derecha
    del punto decimal
    */

    /* Despliega los datos en la pantalla */
    printf("\nDonor %s %s gave $%.2f.\n\n", rec.fname, rec.lname, rec.amount);



    return 0;
}
