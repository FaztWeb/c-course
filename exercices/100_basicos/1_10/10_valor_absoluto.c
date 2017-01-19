// 10) Hacer un programa que muestre el valor absoluto de un número entero:
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n,abs_n;
  printf("*MUESTRA EL VALOR ABSOLUTO*\n\n");
  printf("Ingrese el numero: " );scanf("%d",&n);
  if(n>=0){
    printf("El valor absoluto es : %d",n );
  }else{
    printf("El valor absoluto es : %d",-n );
  }
  return 0;
}
