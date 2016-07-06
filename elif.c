#include <stdio.h>

int main(void) {
  int a;
  printf("Introduce un Numero: ");
  scanf("%d",&a );

  if (a>0) {
    printf("El valor de a es positivo.\n" );
  }else if(a==0){
    printf("El valor de a es nulo.\n" );
  }else if(a<0){
    printf("El valor de a es negativo.\n" );
  }else{
    printf("Es imposible mostrar este mensaje\n");
  }
  return 0;
}
