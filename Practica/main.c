#include <stdio.h>
#include <stdlib.h>

int main()
{
   int contador = 0;
   int numero;
   int acumulador = 0;
   int promedio = 0;

   while(contador < 5 )
   {
       printf("Ingrese un numero: ");
       scanf("%d" , & numero);

       acumulador = acumulador + numero;
       contador++;
   }
   promedio = acumulador / contador;

   printf("El promedio es: %d\n " , promedio);

   return 0;
}
