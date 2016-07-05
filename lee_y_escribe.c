#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;
  float b;
  printf("Introduce un Entero: ");
  scanf("%d",&a );

  printf("Introduce un Flotante: " );
  scanf("%f",&b);

  printf("El valor de a es %d y el valor de b es %f\n",a,b );
  return 0;
}
