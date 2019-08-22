#include<stdio.h>

int main()
{
    int valor, resultado = 0;
    int MB = 0, KB = 0, B = 0;
    char tipo;
    int i;
    double d;

    scanf("%c %d", &tipo, &valor);

    if( tipo == 'i' )
    {
        MB = (sizeof(i) * valor) / 1000;
        B = (sizeof(i) * valor) % 1000;
        printf("%d KB and %d B", MB, B);

    }else if( tipo = 'd' )
    {
        if( valor > 10 && valor < 100 )
        {
            B = sizeof(d) * valor;
            printf("%d B", B );

        }else
        {
            MB = (sizeof(d) * valor) / 1000000;
            KB = ((sizeof(d) * valor) % 1000000)/1000;
            B = (sizeof(d) * valor) % 1000;
            printf("%d MB and %d KB and %d B", MB, KB, B);
        }
    }

    return 0;
}
