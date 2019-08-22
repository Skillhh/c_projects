/* Ilustra el operador de modulo */
/* Recibe un numero */
/* minutos y segundos */

#include<stdio.h>

/* Define constantes */

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

int main()
{
    unsigned secconds, minutes, hours, secs_left, mins_left;

    /* Recibe el numero de segundos */

    printf("Enter number of seconds( < 65000 ):  ");
    scanf(" %d ", &secconds);

    hours =  secconds / SECS_PER_HOUR;
    minutes = secconds / SECS_PER_MIN;
    mins_left = minutes % SECS_PER_MIN;
    secs_left = secconds % SECS_PER_MIN;

    printf("%u seconds is equal to ", secconds);
    printf("%u h, %u m, and %u s", hours, mins_left, secs_left);    

    return 0;
}