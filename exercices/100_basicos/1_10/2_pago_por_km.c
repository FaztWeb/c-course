// 2) Calcula el precio de un viaje sabiendo
// que este se paga por km y cada km se paga por 2€:
#include <stdio.h>
int main(void) {
  float distancia,precio,costo;
  printf("***PAGO POR Km - PRECIO:2$/km\n\n");
  printf("Introducir el Precio de viaje:");
  scanf("%f",&precio);
  printf("Introducir la distancia en Km: ");scanf("%f",&distancia);
  costo=distancia*precio;
  printf("El costo es de %f por %f kilometros",costo,distancia);
  return 0;
}
