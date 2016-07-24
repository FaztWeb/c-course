// Convertir una distancia en metros a kilómetros:
#include <stdio.h>
#define km 1000
int main(void) {
  float metros,dist_km;
  printf("*CONVIERTE DE M A KM*\n\n");
  printf("Ingrese los Metros: ");scanf("%f",&metros);
  dist_km=metros/km;
  printf("la distancia de %f metros en kilometros es: %f km\n",metros,dist_km );
  return 0;
}
