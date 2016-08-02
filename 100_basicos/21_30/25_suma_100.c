// 25) Calcula y visualiza la suma de los 100 primeros números naturales:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n=0,suma=0;
  while (n<=100) {
    printf("%d\n",n);
    suma+=n;
    printf("%d + %d: \n",n,suma);
    n++;
  }
  printf("la suma total es: %d\n",suma );
  return 0;
}
