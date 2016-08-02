// Dados dos nímeros calcula la suma, la resta, la multiplicación y división:
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float n1,n2,suma,resta,mult,divi;
  printf("*CALCULA LA SUMA,RESTA,MULTIPLICACIàN Y DIVISIàN DE 2 NéMEROS*\n\n");
  printf("Ingrese el numero 1: ");scanf("%f",&n1);
  printf("Ingrese el numero 2: ");scanf("%f",&n2);
  suma=n1+n2;
  resta=n1-n2;
  mult=n1*n2;
  divi=n1/n2;
  printf("la suma de es %f,\nla resta es %f,\nla multiplicacion es %f,\nla division es %f",suma,resta,mult,divi);
  return 0;
}
