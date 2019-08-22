/** Nombre de Programa: week1.c  **/
/** Programa para teclear la edades e ingresos
de hasta 100 personas. El programa imprime un 
reporte basado en las cantidades. **/


/** Archivo de Inclusion **/

#include<stdio.h>

/** COnstantes definidas **/

#define MAX 100
#define YES 1
#define NO  0

/** Variables **/

long income[MAX]; //Para guardar los ingresos
int  month[MAX], day[MAX], year[MAX]; //Para guardar fechas de nacimiento
int  x, y, ctr; //Para contadores
int  cont; //Para control del programa
long month_total, grand_total;//Para totales


/** Protocolos de Funciones **/

void main( void );
int display_instructions( void );
void get_data( void );
void display_report();
int continue_function( void );
/** ---------------------------- **/
/** Inicio del Porgrama **/ 

void main()
{  

    cont = display_instructions();

    if( cont == YES )
    {
        
        get_data();
        display_report();

    }
    else
        printf( "\nProgram Aborte by User!\n\n" );
    
}
/** -------------------------------**/
/** Funcion:    display_instructions()
 * Objetivo:    esta funcio despliega informacion sobre la manera
 *              de usar este programa y pide al usuario teclear 0
 *              para terminar o 1 para continuar.
 * Regresa:     NO - si el usuario teclea 0 
 *              YES - si el usuario teclea cualquier numero diferente de 0 **/
/** ------------------------------ **/
int display_instructions( void )
{
    printf("\n\n");
    printf("\nThis program enable you to enter up to 99 people\'S");
    printf("\nincome and birthdays. It then print the income by");
    printf("\nmonth along with the overll income and overall average.");
    printf("\n");

    cont = continue_function();

    return (cont);

}
/** ------------------------------ **/
/** Funcion: get_data()
 * Objetivo:    esta funcion obtiene datos de usuario.
 *              continua piinedo datos hasta que se hayan tecleado
 *              100 personas o hasta que el usuario teclee 0 en el mes.
 * Regresa:     Nada
 * Nota:        Se permiteue se teclee 0/0/0/ para la fecha de nacimiento
 *              en caso de que el usuario no este seguro. Tambien permite
 *              que todos los meses sean de 31 dias. 
 * ------------------------------- **/
void get_data( void )
{
    for( cont = YES, ctr = 0; ctr < MAX && cont == YES; ctr++ )
    {
        
        printf( "\nEnter information for person %d.", ctr+1 );
        printf("\n\tEnter Birthday: ");

        do
        {

            printf("\n\tMonth ( 0 - 12 ): ");
            scanf("%d", &month[ctr]);


        }while( month[ctr] < 0 || month[ctr] > 12 );

        do
        {

            printf( "\n\tDay ( 0 - 31): " );
            scanf( "%d",&day[ctr] );

        }while( day[ctr] < 0 || day[ctr] > 31 );

        do
        {

            printf("\n\tYear ( 0 - 1994 ): ");
            scanf("%d", &year[ctr]);

        }while( year[ctr] < 0 || year[ctr] > 1994 );

        printf( "\nEnter Yearly income (whole dollars): " );
        scanf("%ld", &income[ctr]);

        cont = continue_function();

    }
/** ctr e sigua a la cantidad  de gente que se ha tecleado. **/
}
/** ----------------------------- *
 * Funcion:     display_report();
 * Objetvo:     esta funcion despliega un reporte en la pantalla
 * Regresa:     nada
 * Notas:       Se podria haber impreso mas informacion
 * ------------------------------ **/

void display_report()
{
    grand_total = 0;
    printf("\n\n\n");
    printf("\n      SALARY SUMMARY");
    printf("\n      ==============");

    for( x = 0; x <= 12; x++ )
    {
        month_total = 0;
        
        for( y = 0; y < ctr; y++ )
        {
            if( month[y] == x )
                month_total += income[y];
        }
        printf( "\nTotal for month %d is %d ", x, month_total );
        grand_total += month_total;
    }
    printf("\nReport totals: ");
    printf("\nTotal income is %ld ", grand_total);
    printf("\nAverage income is %ld", grand_total/ctr);

    printf("\n\n* * *  End of Report * * *");

}
/** --------------------------- *
 * Funcion:     continue_function()
 * Objetivo:    Esta funcion le pregunta al usuario si quiere continuar.
 * Regresa:     YES - si el usuario desea continuar
 *              NO -  su el usuario desea terminar. 
 * ----------------------------- * **/ 
int continue_function()
{
    printf("\n\nDo you wish to continue? (0 = NO / 1 = YES): ");
    scanf("%d", &x);

    while( x < 0 || x > 1 )
    {
        
        printf("\n%d is invalid!", x);
        printf("\nPlease enter 0 to Quit or 1 to Continue: ");
        scanf("%d", &x);
        
    }
    if( x == 0 )
        return(NO);
    else
        return(YES);

}

