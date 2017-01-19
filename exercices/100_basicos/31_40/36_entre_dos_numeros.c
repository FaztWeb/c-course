// 36) Crea un programa que permita visualizar los números enteros comprendidos entre dos previamente
// introducidos por teclado
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n1=0,n2=0;

  printf("*VISUALIZA LOS Nº COMPRENDIDOS ENTRE 2*\n\n");

  printf("Introdusca Numero 1: ");scanf("%d", &n1);
  printf("Introdusca Numero 1: ");scanf("%d", &n2);

  if (n1>n2) {
    while (n1>n2) {
      printf("%d\n",n1 );
      n1--;
    }
  }else{
    while (n1<n2){
      printf("%d\n", n1);
      n1++;
    }
  }

  return 0;
}
