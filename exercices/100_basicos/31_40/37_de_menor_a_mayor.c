// 37) Modifica el programa anterior para que muestre los números de mayor a menor.
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n1=0,n2=0;

  printf("*VISUALIZA LOS Nº COMPRENDIDOS ENTRE 2*\n\n");

  printf("Introdusca Numero 1: ");scanf("%d", &n1);
  printf("Introdusca Numero 1: ");scanf("%d", &n2);

  if (n1>n2) {
    while (n1>=n2) {
      printf("%d\n",n1 );
      n1--;
    }
  }else{
    while (n2>=n1){
      printf("%d\n", n2);
      n2--;
    }
  }

  return 0;
}
