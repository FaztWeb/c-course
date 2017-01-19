// 33) Algoritmo que verfique si un numero ingresado esta entre los
// 10 primeros números pares empezando en 2
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n=0;
  printf("Ingresa un Numero: ");scanf("%d",&n);
  if (n>=2 && n <= 10 && n%2 == 0) {
    printf("Tu numero es par: \n");
    int i=0;
    while (i<n) {
      printf("%d\n", i);
      i+=2;
    }
  }else if(n>=0 && n<=10 && n%2 != 0){
    printf("Tu numero es impar.");
  }else{
    printf("tu numero no es valido\n" );
  }
  return 0;
}
