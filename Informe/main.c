/* Nombre de programa: Informe                          */
/* programa para dar informacion hasta 100 personas.    */
/* El programa imprme un informe                        */
/* basandose en la cantidades tecleadas                 */
/* ---------------------------------------------------- */
/* Archivos de inclusion */
/* --------------------- */
#include <stdio.h>
/* Definicion de constantes */
#define MAX 100
#define YES 1
#define NO  0
/* Definiendo variables con estructura */

struct record {
    char fname[5 + 1];      /* Nombre + NULL            */
    char lname[20 + 1];     /* apellido +NULL           */
    char phone[9 + 1];      /* numero telefonico + NULL */
    long income;            /* Ingreso                  */
    int month;              /* mes de nacimiento        */
    int day;                /* dia de nacimiento        */
    int year;               /* anio  de nacimiento      */
};

struct record list[MAX];/* declaracion de estructura */

int last_entry = 0;     /* cantidad total de resgistros */

/* Prototipos de funcion */

void main(void);
void get_data(void);
void display_report(void);
int continue_function(void);
void clear_kb(void);

/* Inicio de programa */

void main(void) {
    int cont = YES;
    int ch;

    while( cont == YES ){
        printf("\n");
        printf("\n    MENU");
        printf("\n  *******\n");
        printf("\n1.    Enter names.");
        printf("\n2.    Print Report.");
        printf("\n3.    Quit.");
        printf("\n\nEnter Selection ==> ");

        ch = getchar();

        switch( ch ){
            case '1':
                get_data();
            break;
            case '2':
                display_report();
            break;
            case '3':
                printf("\n\nThank you for using this program!");
                cont = NO;
            break;
            default:
                printf("\n\nInvalid choice, Please select 1 to 3!");
            break;

        }

    }

}
void get_data(){
    int cont;
    int ctr;

    for ( cont = YES; last_entry < MAX && cont == YES; last_entry++) {
        printf("\n\nEnter information for Person %d.",last_entry+1);

        printf("\n\nEnter first name: ");
        gets(list[last_entry].fname);

        printf("\n\nEnter last name: ");
        gets(list[last_entry].lname);

        printf("\nEnter phone in 123-4567 format: ");
        gets(list[last_entry].phone);

        printf("\nEnter yearly Income (whole dollars): ");
        scanf("%ld", &list[last_entry].income);

        printf("\nEnter Birthday: ");

        do{
            printf("\n\nmonth (0 - 12): ");
            scanf("%d", &list[last_entry].month);
        }while( list[last_entry].month < 0 ||
                list[last_entry].month > 12 );

        do{
            printf("\n\tDay (0 - 31): ");
            scanf("%d",&list[last_entry].day);
        }while( list[last_entry].day < 0 ||
                list[last_entry].day > 31);

        do{
            printf("\n\tYear (1800 - 1996): ");
            scanf("%d", &list[last_entry].year);
        }while (list[last_entry].year < 1800 ||
                list[last_entry].year > 1996);

        cont = continue_function();

    }
    if( last_entry == MAX )
        printf("\n\nMaximun Number of Names has been entered!\n");

}
void display_report(){

    long    month_total,
            grand_total = 0;    /* Almacena los totales */

    int     x,y;

    fprintf(stdout,"\n\n");     /* salta unas cuantas lineas */
    fprintf(stdout, "\n          REPORT");
    fprintf(stdout, "\n         ********");

    for ( x = 0; x <= 12 ; x++) { /* Para casda mes incluyendo el 0. */
        month_total = 0;
        for ( y = 0; y < last_entry; y++) {
            if( list[last_entry].month == x ){
                fprintf(stdout,"\n\t%s %s %s %ld",
                        list[y].fname,
                        list[y].lname, list[y].phone,
                        list[y].income);
                month_total += list[y].income;
            }
        }
        fprintf(stdout,"\nTotal for month %d is %ld",
                x, month_total);
        grand_total += month_total;
    }
    fprintf(stdout, "\n\nReport totals: ");
    fprintf(stdout, "\nTotal Income is %ld", grand_total);
    fprintf(stdout, "\nAverage income is %ld", grand_total,
            last_entry);
    fprintf(stdout, "\n\n* * * End of Report * * *");
}
int continue_function(void){
    char ch;

    printf("\n\nDo you wish to contnue? (Y)es/(N)o: ");
    ch = getchar();

    while( ch != 'n' && ch != 'N' && ch != 'y' && ch != 'Y' ){
        printf("\n%c is invalid!", ch);
        printf("\nlease enter \'N\' to quit or \'Y\' to Continue: ");
        ch = getchar();
    }

    clear_kb();

    if( ch == 'n' || ch == 'N' )
        return(NO);
    else
        return(YES);

}
void clear_kb(void){

    char junk[80];
    gets(junk);
}
