#include <stdio.h>

void main(void){
  int c, nl, blanks, tabs;
  nl=0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
    // if (c == '\b') {
    //   ++blanks;
    // }
    if (c == '\t') {
      ++tabs;
    }
    printf("blanks: %d, tabs:%d, newlines: %d\n", c, tabs, nl);
  }
}
