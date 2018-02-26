
void main() {
  int x = 5, y = 2;

  x = 10;
  x = x + y;
  y = x - y;
  x = x * y;
  y = x / 5;

  x += y;
  x -= y;
  x *= y;
  x /= y;

  x = 5;
  int z = x++;
  x = 5;
  z = ++x;

  x = 0;
  x--;

  x = 0;
  x = !x;
  printf("x is %d\n", x);
}
