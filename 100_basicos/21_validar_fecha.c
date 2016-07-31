// 21) Hacer un algoritmo que me valide una fecha por teclado:
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int day,month,year;
  printf("Introduzca día: ");scanf("%d",&day);
  printf("Introduzca mes: ");scanf("%d",&month);
  printf("Introduzca año: ");scanf("%d",&year);

  if (day>=1 && day <= 31 && year>=1 && month>=1&& month<=12) {
    
  }
  return 0;
}
