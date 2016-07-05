#include <stdio.h>
#include <math.h>

int main(void) {
  int a , b, i;
  float s;

  printf("Limite Inferior: ");
  scanf("%d", &a);

  while(a<0){
    printf("No puede ser Negativo\n");
    printf("Limite Inferior: ");
    scanf("%d",&a);
  }

  printf("Limite Superior: ");
  scanf("%d",&b);
  while (b < a) {
    printf("No puede ser menor que %d\n",a);
    printf("Limite Superior:" );
    scanf("%d",&b );
  }

  //Calcular el sumatorio de la raíz cuadrada de i para i entre a y b.
  s=0.0;
  for (i = a; i < b; i++) {
    s+=sqrt(i);
  }

  //output
  printf("Sumatoria de Raices:\n");
  printf("de %d a %d: %f\n",a,b,s);

  return 0;
}
