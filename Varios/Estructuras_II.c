#include<stdio.h>

struct cliente{
    char empresa[20];
    char representante[25];
};

struct venta{
    struct cliente comprador;
    char concepto[20];
    float importe;
};

struct venta y1990[100] =
{
    { {"Industrias Acme", "Juan Perez"},
        "Escritorio",
       1000.0

    },
    { {"Compañia Wilson", "Pedro Wilson"},
        "Silla modelo 12",
        290.00
    }
};

int main()
{
    int i;

    for( i = 0; i < 2; i++ )
    {
        printf("\nEmpresa: %s", y1990[i].comprador.empresa );
        printf("\nRepresentante: %s", y1990[i].comprador.representante );
        printf("\nConcepto: %s", y1990[i].concepto);
        printf("\nImporte: %.2f\n", y1990[i].importe);
    }

    return 0;
}
