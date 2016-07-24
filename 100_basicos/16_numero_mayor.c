// 16) Hacer un programa que dados tres números enteros
// por teclado me muestre el mayor:
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n1,n2,n3;
  printf("*MUESTRA EL MAYOR DE 3 NUM.*\n\n");
  printf("Ingresa el PRIMER numero: ");scanf("%d",&n1);
  printf("Ingresa el SEGUNDO numero: ");scanf("%d",&n2);
  printf("Ingresa el TERCERO numero: ");scanf("%d",&n3);
  if ((n1>n2 && n1>n3) || (n1==n2 && n1>n3)) {
    printf("%d es el mayor de los tres.",n1);
  }else{
    if (n2>n1 && n2>n3) {
      printf("%d es el mayor de los tres.",n2);
    }else{
      printf("%d es el mayor de los tres.",n3);
    }
  }

  return 0;
}
