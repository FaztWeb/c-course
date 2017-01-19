//muestra la salida en octal de una entrada decimal
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int numero;
  printf("Ingrese un Numero Decimal:");scanf("%i",&numero);
  printf("\n\nEl numero %i en octal es: %o",numero,numero );
  return 0;
}
