//el producto de los numeros es igual a 100?

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b;
  printf("Dame un numero: ");
  scanf("%d",&a );
  printf("Dame otro numero: ");
  scanf("%d",&b );
  if(a*b==100){
    printf("el producto de %d y %d es IGUAL a 100\n",a,b );
  }else{
    printf("el producto de %d y %d es DIFERENTE a 100\n",a,b );
  }

  return 0;
}
