// 19) Hacer un programa que dado por teclado una hora,minuto y segundo correctos,
// muestre la misma un segundo después:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int hora,minuto,segundo;
  printf("*MUESTRA LA HORA 1 SEGUNDO DESPUS*\n\n");
  printf("Ingresa la Hora: ");scanf("%d",&hora );
  printf("Ingresa la Minuto: ");scanf("%d",&minuto );
  printf("Ingresa la Segundo: ");scanf("%d",&segundo);

  if (hora<=23 && minuto<=59 && segundo<=59) {
    segundo++;
    if (segundo==60) {
      segundo=0;
      minuto++;
    }
    if (minuto==60) {
      minuto=0;
      hora++;
    }
    if (hora==24) {
      hora=0;
    }
    printf("mas un segundo es: %d:%d:%d\n",hora,minuto,segundo );
  }else{
    printf("No es una Hora Correcta");
  }
  return 0;
}
