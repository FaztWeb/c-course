#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n=1;
  while (n<6) {
    int i=1;
    while (i<6) {
      printf("%d\t",n*i );
      i=i+1;
    }
    n=n+1;
    printf("%d\n", n);
  }
  return 0;
}
