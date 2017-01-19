// Mostrar el área de un triángulo:
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float base,altura,area;
  printf("*MUESTRA EL AREA DE UN TRIµNGULO*\n\n");
  printf("Ingresa la base: ");scanf("%f",&base);
  printf("Ingresa la altura: ");scanf("%f",&altura);
  area=base*altura/2;
  printf("El area es: %f\n",area );
  return 0;
}
