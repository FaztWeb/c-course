// 39) Visualiza la suma de los enteros comprendidos entre dos números previamente introducidos por teclado.
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n1=0,n2=0,suma=0;
  printf("*VISUALIZA LA SUMA DE LOS ENTEROS COMPRENDIDOS ENTRE 2 Nº*\n\n");
  printf("Introduce el primer numero: ");scanf("%d",&n1);
  printf("Introduce el segundo numero: ");scanf("%d",&n2);

  if (n1>n2) {
    while (n2<=n1) {
      printf("%d ",n2 );
      suma+=n2;
      n2++;
    }

  }else{
    while (n2>=n1) {
      printf("%d ",n1 );
      suma+=n1;
      n1++;
    }
  }

printf("la Suma es: %d\n",suma );
  return 0;
}
