#include <stdio.h>

int main(int argc, char const *argv[]) {
  int input;

  printf("Introduce un Numero:" );
  scanf("%d", &input);

  while (input>0) {
    printf("%d\n",input );
    input-=1;
  }
  printf("¡Boom!");
  return 0;
}
