#include <stdio.h>

void main (void){
  int c;
  c = getchar();
  while (c != EOF) {
    // putchar(c);
    printf("%d\n", c);
    c = getchar();
  }
}
