#include <stdio.h>
#include <stdlib.h>

int main()
{
  int contador = 0;
  int mayoresCero = 0;
  int menoresCero = 0;
  int numero;

  while(contador  < 10)
  {
      contador++;

      printf("Ingrese un  numero: ");
      scanf("%d" , & numero);


      if(numero > 0)
      {
          mayoresCero++;
      }
      else
      {
          menoresCero++;
      }
  }

  printf( "Los mayores a cero son: %d\n" , mayoresCero);
  printf( "Los menores a cero son: %d\n" , menoresCero);

}
