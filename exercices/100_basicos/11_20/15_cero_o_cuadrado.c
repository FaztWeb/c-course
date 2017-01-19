// 15) Programa que introduzca un número entero por teclado,
// si este es 0 me tiene que mostrar su valor en letra y
// si es distinto de 0 se visualiza sucuadrado:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n;
  printf("*MUESTRA EL CUADRADO DE UN NUMERO*\n\n");
  printf("Ingresa un Numero: ");scanf("%d",&n );
  if (n==0) {
    printf("El Numero es CERO");
  }else{
    printf("%d",n*n);
  }
  return 0;
}
