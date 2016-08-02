// 24) Hacer un algoritmo que muestre los 10 primeros números pares empezando por el 2
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n=2,indice=1;

  while (n<=20) {
    printf("numero %d :%d\n",indice,n);
    n+=2;
    indice++;
  }
  return 0;
}
