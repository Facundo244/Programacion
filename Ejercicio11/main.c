#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    for ( numero = 2 ; numero <= 100 ; numero += 2 )
    {
        printf( "\n   " );
        printf( "%d ", numero );
    }

    return 0;
}
