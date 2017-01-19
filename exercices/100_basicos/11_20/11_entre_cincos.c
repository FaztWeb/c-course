// 11) Hacer un programa que nos informe si un número
// entero está entre el intervalo [-5 y 5]
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  printf("*MUESTRA SI EL NUMERO ESTµ ENTRE -5 Y +5*\n\n");
  printf("Ingrese un numero: ");scanf("%d",&n);
  if(n>=-5&&n<=5){
    printf("%d esta entre -5 y 5",n);
  }else{
    printf("%d NO esta entre -5 y 5",n);
  }
  return 0;
}
