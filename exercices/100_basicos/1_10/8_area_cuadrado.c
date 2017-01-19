//8) Mostrar el área de un cuadrado
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float area,lado;
  printf("*MUESTRA EL µREA DE UN CUADRADO*\n\n");
  printf("Ingrese un lado: " );scanf("%f",&lado);
  area=lado*lado;
  printf("el area es : %f",area);
  return 0;
}
