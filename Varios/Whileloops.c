#include<stdio.h>

int main()
{
    int suma;
    int valor = 0;
    while( valor != -1 )
    {
        scanf("%d", &valor);
        if(valor != -1)
            suma = suma + valor;
    }
    printf("%d", suma);

    //getchar();
}
