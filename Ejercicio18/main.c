#include <stdio.h>
#include <stdlib.h>
//el producto  esta mal C:
int main()
{
    int numeros;
    int contador = 0;
    int positivos = 0;
    int negativos = 0;
    int contPos = 0;
    int contNeg = 0;
    int producto;

    while(contador < 10)
    {
        contador++;
        printf("Ingrese un  numero: ");
        scanf("%d" , & numeros);

        if(numeros == 0)
        {
            printf("ERROR , Ingrese un numero que no sea 0");
        }
        else if(numeros > 0)
        {
            contPos++;
            positivos+= numeros;
        }
        else
        {
            contNeg++;
            negativos+= numeros;
            producto = numeros*numeros;

        }

    }
    printf("Suma de positivos %d\n" , positivos);
    printf("Producto de negativos %d\n" , producto);
}
