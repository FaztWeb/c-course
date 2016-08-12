// 35) Crea un programa que permita visualizar los números enteros
// comprendidos entre 5 y un número introducido por teclado
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n=0;
  printf("Ingresa un Numero", &n);scanf("%d",&n);
  if (n<5) {
    while (n<=5) {
      printf("%d\n",n);
      n++;
    }
  }else{
    while(n>=5){
      printf("%d\n",n);
      n--;
    }
  }
  return 0;
}
