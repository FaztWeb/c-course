// 28) Calcular la suma de los números comprendidos
// entre dos números dados por teclado:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n1,n2,suma=0;
  printf("Ingresa el primer Numero: ");scanf("%d", &n1);
  printf("Ingresa el segundo Numero: ");scanf("%d", &n2);
  if (n1>n2) {
    while (n1>=n2) {
      suma+=n2;
      n2++;
    }
    printf("la suma entre los numeros comprendidos es: %d\n" ,suma );
  }else{
    while (n2>=n1) {
      suma+=n1;
      n1++;
    }
    printf("la suma entre los numeros comprendidos es %d\n",suma);
  }
  return 0;
}
