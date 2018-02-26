#include <stdio.h>

// symbolic constanst
#define LOWER 0
#define UPPER 0
#define STEP 0

main() {
  int x = 0; //4 bytes -2 billion to +2 billion
  short y = 0; //2 bits -32 thousand to +32 thousand
  char z = 0; // 1 byte -127 to 128
  long xx = 0; // 4 byte
  long long huge; // 8 bytes 64-bits

  // unsigned
  unsigned int uVariable = 0; // 0 to 4 billion
  unsigned char uVariable2 = 0; // 0 to 255

  float w = 1.5f; //4 bytes
  double q = 1.5000000000000000001; //8 bytes

}
