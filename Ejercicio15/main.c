#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;


    for ( numero = 0 ; numero < 100; numero += 6 )
    {
        printf( "\n   " );
        printf( "%d ", numero );
    }


    return 0;
}
