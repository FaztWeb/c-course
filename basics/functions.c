#include <stdio.h>

int sum (int a, int b){
  int res;
  res = a + b;
  return res;
}

int sum_and_diff(int a, int b, int *res){
  int sum;
  sum = a + b;
  *res = a - b;
  return sum;
}

void main(void ){
  int y = 2;
  int z = sum(5, y);
  printf("The sum of 5 and %d is %d",y,z );

  int b= 2;
  int diff;
  printf("The sum of 5 and %d is %d\n", b,sum_and_diff(5, b, &diff));
  printf("The difference of 5 and %d is %d\n",b ,diff);

}
