#include <stdio.h>

int main(void) {
  int a,b,c,maximo;

  printf("a: ");scanf("%d",&a );
  printf("b: ");scanf("%d",&b );
  printf("c: ");scanf("%d",&c );
  if (a>b)
    if(a>c)maximo=a;
    else maximo=c;
  else
    if(b>c)maximo=b;
    else maximo=c;
  printf("El numero maximo es %d\n",maximo);
  return 0;
}
