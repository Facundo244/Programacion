#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int cuadrado;

    printf("Ingrese un numero: ");
    scanf("%d" , &numeroUno);

    cuadrado = numeroUno*numeroUno;

    if(numeroUno < 0)
    {
        printf("ERROR , el numero debe ser mayor a cero \n");
    }
    else
    {
        printf("El cuadrado de un numero es %d\n" , cuadrado);
    }


    return 0;
}
