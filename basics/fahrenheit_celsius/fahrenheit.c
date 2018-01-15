#include <stdio.h>

float fahr_to_cel(float fahrenheit)
{
  return 5 * (fahrenheit - 32) / 9;
}

/**
  * print Fahrenheit-Celsius table for
  * fahr = 0, 20, ...., 300
*/

void main (void){
  int lower, upper, step;
  float fahr, celsius;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = fahr_to_cel(fahr);
    printf("%2d\t%6d\n", lower, celsius);
    fahr += step;
  }
}
