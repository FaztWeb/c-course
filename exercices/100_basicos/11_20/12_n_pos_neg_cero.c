// 12) Hacer un programa que me muestre en texto
// si un número es entero, positivo, negativo o cero:
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  printf("*MUESTRA SI EL NUMERO ES POSITIVO, NEGATIVO O CERO*\n\n");
  printf("Introduzca un Número: ");scanf("%d",&n);
  if (n>0) {
    printf("%d es POSITIVO",n);
  }else if(n<0){
    printf("%d es NEGATIVO",n);
  }else{
    printf("El numero es CERO",n);
  }
  return 0;
}
