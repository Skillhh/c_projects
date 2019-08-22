#include<stdio.h>

int main()
{
 int x =0;

 printf("Digite su edad: ");
 scanf("%d", &x);

 if( x >= 21 && x < 65 )
 {
  printf("Usted ya es un Adulto pero no AdultoMayor.\n ");
 }else
 {
   if( x < 21)
     	printf("Usted aun no es Adulto\n");
   else
	printf("Ustede es Adulto Mayor\n");
 }

 return 0;
}
