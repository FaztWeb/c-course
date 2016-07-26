// 19) Hacer un programa que dado por teclado una hora,minuto y segundo correctos,
// muestre la misma un segundo después:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int hora,minuto,segundo;
  printf("*MUESTRA LA HORA 1 SEGUNDO DESPUS*\n\n");
  printf("Ingresa la Hora: ");scanf("%d",&hora );
  printf("Ingresa la Minuto: ");scanf("%d",&minuto );
  printf("Ingresa la Segundo: ");scanf("%d",&segundo);

  if (segundo<=59) {
    segundo++;
    if (segundo == 60) {
      segundo=0;
      minuto++;
      printf("%d:%d:%d\n",hora,minuto,segundo );

    }
  }
  return 0;
}
