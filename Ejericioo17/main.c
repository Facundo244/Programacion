#include <stdio.h>
#include <stdlib.h>

int main()
{
   int unNumero;

    printf("Ingrese un numero por el teclado: ");
    scanf("%d" , & unNumero);

    if(unNumero %2 == 0)
    {
        printf("Es Par");
    }
    else
    {
        printf("Es Impar");
    }

    return 0;
}
