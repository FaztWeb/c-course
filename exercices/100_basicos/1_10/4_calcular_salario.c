//4) Mostrar el nuevo salario de un empleado
//si obtuvo un incremento del 8% sobre el salario

#include <stdio.h>
#define incremento 0.08
int main(void) {
  float salario,aumento;
  printf("*MUESTRA EL SALARIO CON UN INCREMENTO DEL 8 PORCIENTO*\n\n");
  printf("Salario de un empleado: ");scanf("%f",&salario);
  aumento=salario*incremento;
  printf("Su nuevo salario es %f, aumento es %f",salario+aumento,aumento);
  return 0;
}
