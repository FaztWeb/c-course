/* 30) Visualizar los números enteros comprendidos entre dos números previamente introducidos
por teclado empezando por el mayor y disminuyendo de siete en siete:*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n1=0,n2=0;
  printf("Introduce Numero1: ");scanf("%d",&n1);
  printf("Introduce Numero2: ");scanf("%d",&n2);

  if (n1>n2) {
    while (n1>n2) {
      printf("%d\n",n1);
      n1-=7;
    }
  }else{
    while (n2>n1) {
      printf("%d\n", n2);
      n2=n2-7;
    }
  }
  return 0;
}
