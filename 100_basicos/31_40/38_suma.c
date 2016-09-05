// 38) Visualiza la suma de los enteros comprendidos entre 0 y otro número
// (validado mayor que cero) introducido por teclado
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n=0,sum=0;
  while (n==0) {
   printf("Introduce un Numero mayor a 0: ");scanf("%d",&n);
  }
  for(int i=0;i<=n;i++){
    printf("%d ",i );
    sum+=i;
  }
  printf("La Suma es %d\n",sum);
  return 0;
}
