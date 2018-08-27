#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero;

    printf("Ingrese un numero por el teclado: ");
    scanf("%d" , & unNumero);

    if(unNumero > 0)
    {
        printf("Es positivo");
    }
    else
    {
        printf("Es Negativo");
    }

    return 0;
}
