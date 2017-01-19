//quien es el numero maximo?
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,maximo;
  printf("Numero 1: ");
  scanf("%d",&a );
  printf("Numero 2:" );
  scanf("%d", &b);
  if (a>=b) {
    maximo=a;
  }else{
    maximo=b;
  }
  printf("El numero mayor es %d\n",maximo );
  return 0;
}
