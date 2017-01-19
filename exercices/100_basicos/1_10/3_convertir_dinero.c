//convertir de una moneda a otra (de euros a pesetas)
#include <stdio.h>
int main(void) {
  float pesetas,euros;

  printf("*MUESTRA CUANTOS EUROS SON UNA CANTIDAD EN PESETAS*\n\n");
  printf("Introdusca las pesetas: ");scanf("%f",&pesetas);
  euros=pesetas/166.386;
  printf("%f pesetas en euros es %f\n",pesetas,euros );
  return 0;
}
