#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b;
  printf("Introduce un Numero: " );
  scanf("%d", &a);

  b=2;
  while (a>b) {
    if (a%b==0) {
      break;
    }
    b+=1;
  }
  if (a==b) {
    printf("%d es un numero primo\n",a );
  }else{
    printf("no es un numero\n" );
  }

  return 0;
}
