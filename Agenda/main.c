#include <stdio.h>
#include <stdlib.h>

void menu(void);

int elegir_menu(int);

int main() {
    int opcion;
    while(1){
        menu();
        printf("Elige opcion: ");
        scanf("%d", &opcion);
        if(opcion == 5)
            break;

        elegir_menu(opcion);
    }
}
void menu(void){
    printf("***** Agenda Telefonica *****\n");
    printf("1. Agregar contacto.\n");
    printf("2. Borrar contacto.\n");
    printf("3. Ver contacto.\n");
    printf("4. Ver todos los contactos.\n");
    printf("5. Salir.\n");

}
int elegir_menu(int opcion){
    switch (opcion){
        case 1:
            printf("***** Agregar Contacto *****\n");
        break;
        case 2:
            printf("***** Borrar Contacto *****\n");
        break;
        case 3:
            printf("***** Ver Contacto *****\n");
        break;
        case 4:
            printf("***** Ver todos los Contactos *****\n");
        break;
        default:
            printf("Opcion no valida, vuelve a intentarlo.\n");
        break;
    }
}
