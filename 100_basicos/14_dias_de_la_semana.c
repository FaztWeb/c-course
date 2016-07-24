// 14) Hacer un programa que me muestre el día de la semana
 // correspondiente a un número entero dado:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n;
  printf("*MUESTRA EL DIA DE LA SEMANA SEGéN UN NUMERO*\n\n");
  printf("Ingrese el numero de la semana: ");scanf("%d",&n);
  switch (n) {
    case 1:
      printf("%d - es Lunes ",n );
      break;
    case 2:
      printf("%d - es Lunes ",n );
      break;
    case 3:
    printf("%d - es Miercoles",n);
      break;
    case 4:
      printf("%d - es Jueves ",n );
      break;
    case 5:
      printf("%d - es Viernes ",n );
      break;
    case 6:
    printf("%d - es Sabado",n);
      break;
    case 7:
    printf("%d - es Domingo",n);
      break;
    default:
      printf("%d - No es un Numero Valido",n);
  }
  return 0;
}
