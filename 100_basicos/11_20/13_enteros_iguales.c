// 13) Hacer un programa que me indique
// si dos números enteros son iguales o no:
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n1,n2;
  printf("*MUESTRA SI DOS NUMEROS SON IGUALES O NO*\n\n");
  printf("Ingrese el primer numero: ");scanf("%d",&n1);
  printf("Ingrese el segundo numero: ");scanf("%d",&n2);
  if (n1==n2) {
    printf("%d y %d son iguales ",n1,n2);
  }else{
    printf("Los numeros no son iguales");
  }
  return 0;
}
