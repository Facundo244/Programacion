#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numeroUno;
    int numeroDos;
    int producto;
    int cuadrado;


    printf("Ingrese un numero: ");
    scanf("%d" , &numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d" , &numeroDos);

    producto = numeroUno*numeroDos;
    cuadrado = numeroUno*numeroUno;


    printf("El producto de los numeros es: %d\n" , producto);
    printf("El cuadrado del numeroUno es: %d\n" , cuadrado);

    system("pause");
    system("cls");

    return 0;
}
