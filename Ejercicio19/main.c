#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingresar un numero: ");
    scanf("%d" , & numero);

    for ( numero = 100 ; numero >= 0 ; numero -- )
    {
        printf( "\n   " );
        printf( "%d ", numero );
    }


    return 0;
}
