//calcular el promedio de 3 valores
#include <stdio.h>
void main() {
  float promedio,numero;
  printf("Ingrese el valor 1: ");scanf("%f",&numero);
  promedio+=numero;
  printf("Ingrese el valor 2: ");scanf("%f",&numero);
  promedio+=numero;
  printf("Ingrese el valor 3: ");scanf("%f",&numero);
  promedio+=numero;
  promedio/=3;
  printf("el promedio es: %f",promedio);

}
