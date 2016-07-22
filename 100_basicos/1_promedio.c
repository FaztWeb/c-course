// 1) Hacer un programa que calcule y muestre
// la media de tres notas de un alumno:
#include <stdio.h>

int main(void) {
  float n1,n2,n3,media;
  printf("***Calcula la Nota de 3 notas***\n\n");
  printf("Inserte Nota 1:");scanf("%f",&n1);
  printf("Inserte Nota 2:");scanf("%f",&n2);
  printf("Inserte Nota 3:");scanf("%f",&n3);
  media=(n1+n2+n3)/3;
  printf("El promedio de la nota es: %f",media );
  return 0;
}
