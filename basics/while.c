#include <stdio.h>

void main(void){
  int a = 0;

  while(a < 5){
    printf("a is equal to %d\n", a);
    a++;
  }

  printf("-------------------\n");

  while(1){
    printf("a is equal to %d\n", a);
    a--;
    if (a == 0) {
      break;
    }
  }

  printf("a is equal to %d and I've finished", a);
}
