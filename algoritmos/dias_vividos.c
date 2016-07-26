//calcular los dias vividos a partir de loas ños
#include <stdio.h>

int main(int argc, char const *argv[]) {
  char nombre[50];
  int edad;
  printf("Ingresa tu Nombre: ");scanf("%s",&nombre);
  printf("Ingresa tu Edad: ");scanf("%d",&edad);
  edad=edad*365;
  printf("%s has vividos %d días",nombre,edad);
  return 0;
}
