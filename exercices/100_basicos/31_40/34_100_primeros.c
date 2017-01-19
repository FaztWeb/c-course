// 34) Crea un programa, para visualizar la suma de los números enteros comprendidos entre 0 y 100
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int suma=0;
  for (size_t i = 0; i < 100; i++) {
    printf("%d\n",i );
    suma+= i;
  }
  printf("La suma es %d \n",suma );
  return 0;
}
