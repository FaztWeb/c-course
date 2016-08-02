/* 20) Hacer un programa que me muestre la cantidad que tengo que pagar
 por una llamada telefónica sabiendo
 que los primeros 15 min valen 15 centimos el min,
 pero apartir del 5º minuto cada min cuesta 5 ctms:*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int minutos=0,centimos=15,precio=0;
  printf("*PRECIO DE UNA LLAMADA TELEFàNICA*\n\n");
  printf("Ingrese los mintuos");scanf("%d",&minutos);
  if (minutos<=5) {
    precio=minutos*centimos;
    printf("Tendre que pagar %d ",precio);
  }else{
      centimos=5;
      precio=((minutos - 5) * centimos + (15*5));
      printf("tendre que pagar %d ",precio);
  }
  return 0;
}
