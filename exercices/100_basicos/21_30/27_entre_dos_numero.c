// 27) Crea un programa que permita visualizar
// los números comprendidos entre dos números dados por teclado:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n1=0,n2;
  printf("Ingres el numero 1: ");scanf("%d",&n1);
  printf("Ingres el numero 2: ");scanf("%d",&n2);

  if (n1>n2) {
    while (n1>=n2) {
      printf("%d \n",n2 );
      n2++;
    }
  }else{
    while (n2>=n1) {
      printf("%d \n",n1 );
      n1++;
    }
  }
  return 0;
}
