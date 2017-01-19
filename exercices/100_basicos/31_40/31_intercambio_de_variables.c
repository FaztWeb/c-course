// 31) Hacer un programa que intercambie el valor de dos variables:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n1,n2,interchage;
  printf("*INTERCAMBIA EL VALOR DE DOS VARIABLES*\n\n");
  printf("n1: ");scanf("%d",&n1);
  printf("n2: ");scanf("%d",&n2);
  interchage=n1;
  n1=n2;
  n2=interchage;
  printf("\nn1 tiene el valor: %d\nn2 tiene el valor:%d\n",n1,n2);
  return 0;
}
