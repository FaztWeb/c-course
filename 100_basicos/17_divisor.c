// 17) Hacer un algoritmo que determine si
// dados dos números por teclado el primero es divisor del segundo:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b;
  printf("*DIVISOR DE UN NUM.*\n\n");
  printf("Ingrese el primer numero: ");scanf("%d",&a);
  printf("Ingrese el segundo numero: ");scanf("%d",&b);
  if (a%b==0) {
    printf("ES divisible");
  }else{
    printf("NO ES divisible");
  }
  return 0;
}
