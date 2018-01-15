#include <stdio.h>

void main(void){
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
    printf("%d\n", EOF);
  }
}
