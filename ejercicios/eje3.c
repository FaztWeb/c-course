#include <stdio.h>
#include "math.h"

int main(void) {
  float x1,x2,y1,y2,dx,dy,distancia;

  printf("Ingresa x1: ");
  scanf("%f",&x1 );

  printf("Ingresa y1: " );
  scanf("%f", &y1 );

  printf("Ingresa x2: " );
  scanf("%f", &x2 );

  printf("Ingresa y2: " );
  scanf("%f", &y2 );

  dx=x2-x1;
  dy=y2-y1;
  distancia=sqrt((dx*dx)+(dy*dy));

  printf("La distancia es: %f\n",distancia );
  return 0;
}
