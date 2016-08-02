// 22) Mostrar la raíz cuadrada de un número:
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  float n;
  printf("Ingrese un numero: ");scanf("%f",&n );
  if (n>=0.0) {
    printf("La raiz cuadrada es: %f\n",sqrt(n));
  }else{
    printf("Su raiz cuadrada es %f*i\n",sqrt(-n));
  }
  return 0;
}
