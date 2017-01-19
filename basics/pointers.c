#include <stdio.h>

void main (void){
  int a;
  int *ptr_to_a;

  ptr_to_a = &a;

  a = 5;
  printf("the value of a is %d\n", a);

  *ptr_to_a = 6;
  printf("the value of a is %d\n", a);

  printf("The value of ptr_to_a is %d\n", ptr_to_a);
  printf("It stores the value %d\n", *ptr_to_a);
  printf("The address of a is %d\n", &a);
}
