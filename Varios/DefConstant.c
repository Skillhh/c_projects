/** Muestras las variables y constantes **/
#include<stdio.h>
/**Define un variable para convertir libras en gramos**/
#define GRAMS_PER_POUND 454
int main()
{
    /** Define una constante para el comienzo del siguiente ciclo **/
    const int NEXT_CENTURY = 2000;
    /** Declara variables necesarias **/
    long weight_in_grams, weight_in_pounds;
    int year_of_birth, age_in_2000;

    /* Recibe entrada de usuario */
    printf("Enter your weight in pounds:  ");
    scanf("%d", &weight_in_pounds);
    printf("Enter your year of birth:  ");
    scanf("%d", &year_of_birth);

    /* Ejecuta conversiones */
    weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
    age_in_2000 = NEXT_CENTURY - year_of_birth;

    /* Despliega los resultados en la pantalla */
    printf("\nYour weight in grams = %1d",weight_in_grams);
    printf("\nIn 2000 you will be %d years old\n", age_in_2000);

    return 0;
}
