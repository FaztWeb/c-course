// 18) Dado un número entero X por teclado, determina si es par o no:
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x;
  printf("*DETERMINA SI ES PAR O NO*\n\n");
  printf("Ingresa un numero: ");scanf("%d",&x);
  if (x%2 == 0) {
    printf("El numero %d es par.",x);
  }else{
    printf("El numero %d NO es par.",x);
  }
  return 0;
}
