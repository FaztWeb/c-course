#include <stdio.h>

// Print faherenheit-Celsius Table
// for fahr = 0, 20, ... , 300

void main () {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
      celsius = 5 * (fahr - 32) / 9;
      printf("%d\t%d\n", fahr, celsius);
      fahr = fahr + step;
    }
}

// but 0° faherenheit is actually -17.8° C, not -17
