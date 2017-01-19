// 26) Dado un número entero positivo calcular la suma desde 1 hasta dicho número:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n,suma;
  printf("Ingrese un Numero: ");scanf("%d",&n);
  for (size_t i = 0; i <= n; i++) {
    suma+=i;
  }
  printf("%d\n",suma );
  return 0;
}
