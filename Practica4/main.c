#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorUno;
    int valorDos;
    int resta;

    printf("Ingrese el valor uno: ");
    scanf("%d" , & valorUno);

    printf("Ingrese el valor dos: ");
    scanf("%d" , & valorDos);

    resta = valorUno-valorDos;

    if(resta > 0 )
    {
        printf("Resultado Positivo\n");
    }
    else if (resta < 0)
    {
        printf("Resultado Negativo\n");
    }
    else
    {
        printf("Resultado es Cero\n");
    }

    system("pause");
    system("cls");

    return 0;
}
