#include <stdio.h>

void main(void){
  int intval = 255958283;
  void *vptr = &intval;

  printf("The value at vptr as an int is %d\n",((int *) vptr);
  printf("The value at vptr as an char is %d\n",(char *) vptr );
}
