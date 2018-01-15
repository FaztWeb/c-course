#include <stdio.h>

void main (void){
  int lower, upper, step;
  float fahr, celsius;

  lower = 0,
  upper = 300;
  step  = 20;

  celsius = lower;

  while(celsius <= upper){
    fahr = celsius  * 9/5 + 32;
    printf("%f\t%f\n",celsius, fahr );
    celsius += step;
  }
  
}
