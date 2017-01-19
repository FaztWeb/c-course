#include <stdio.h>
#include <math.h>

int main(void) {
  float x =1;
  while (x<100) {
    printf("%f - %f\n",x,log(x) );
    x=x+1;
  }
  return 0;
}
