#include <stdio.h>
#include <stdlib.h>

int main()
{
  int base;
  int altura;
  int superficie;

    printf("Ingrese la base: ");
    scanf("%d" ,& base);

    printf("Ingrese la altura: ");
    scanf("%d" , & altura);

    superficie = base*altura/2;

    printf("La superficie es: %d\n" , superficie);

    return  0;
}
