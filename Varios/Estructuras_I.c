#include<stdio.h>

struct cliente{
    char empresa[20];
    char representante[25];
};

struct venta{
    struct cliente comprador;
    char concepto[20];
    float importe;
} miventa ={ {"Industrias Acme", "Juan Perez"},
               "Escritorio",
               1000.0
            };

int main()
{
    printf("\nEmpresa: %s", miventa.comprador.empresa);
    printf("\nRepresentante: %s", miventa.comprador.representante);
    printf("\nConcepto: %s", miventa.concepto);
    printf("\nImporte: %f\n\n", miventa.importe);

    return 0;
}
