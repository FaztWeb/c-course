#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;
  printf("Introduce un entero:");
  scanf("%d",&a );

  if (a%2 == 0) {
    printf("El numero es par.\n");
    if (a>0) {
      printf("Y ademas es positivo.\n" );
    }
  }else{
    printf("El numero es impar\n" );
  }
  return 0;
}
