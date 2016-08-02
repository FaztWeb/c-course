// 29) Calcula la media de 15 números reales dados por teclado:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i=1,cantidad_numeros=15,numero=0,suma=0;
  while (i<=cantidad_numeros) {
    printf("Ingrese un numero");scanf("%d",&numero);
    suma+=numero;
    i++;
  }
  printf("la media es %d\n",suma/cantidad_numeros );
  return 0;
}
