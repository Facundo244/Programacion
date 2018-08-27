#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf( "\n   " );

    for ( numero = 2 ; numero <= 30 ; numero += 2 )
    {
        printf( "%d ", numero );
    }

    getch(); /* Pausa */

    return 0;

}
