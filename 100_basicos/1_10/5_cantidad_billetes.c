//5) Dada la cantidad de Billetes 5,10,20 mostrar el importe total:

#include <stdio.h>

int main(void) {
  int cant_cinco,cant_diez,cant_veint,importe;
  printf("*CALCULA EL IMPORTE DADO UNA CANTIDAD DE BILLETES*\n\n");
  printf("Introduzca la cantidad de billetes de 5: ");scanf("%d",&cant_cinco);
  printf("Introduzca la cantidad de billetes de 10: ");scanf("%d",&cant_diez);
  printf("Introduzca la cantidad de billetes de 20: ");scanf("%d",&cant_veint);

  importe = cant_cinco*5+cant_diez*10+cant_veint*20;
  printf("El importe total es %d\n",importe);
  return 0;
}
