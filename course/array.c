#include <stdio.h>

void main(void){
  int a[10];
  int b[10] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99 };
  int count;
  for(count=0; count<10; count++){
    a[count] = 10 * count + count ;
  }
  printf("the first and the second element of a are %d and %d\n", a[0], a[1]);
  printf("Or, as pointers, %d and %d\n",*a, *(a+1));
}
