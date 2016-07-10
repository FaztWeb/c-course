#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a,b,x;

  printf("(a/b) <-- ingresa el numero a: " );
  scanf("%f",&a );

  printf("(a/b) <-- ingresa el numero b: " );
  scanf("%f",&b );

  if (a!=0) {
    x=-b/a;
    printf("la respuesta es: %f", x);
  }else{
    if (b!=0) {
      printf("la ecuacion no tiene solucion" );
    }else{
      printf("la ecuacion tien muchas soluciones" );
    }
  }
  return 0;
}
