#include <stdio.h>

float fahr_to_cel(float fahrenheit)
{
  return 5.0/9.0 * (fahrenheit - 32);
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
  printf("Fahrenheit\tCelsius");
  while (fahr <= upper) {
    celsius = fahr_to_cel(fahr);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr += step;
  }
}
