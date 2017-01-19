
//importe de bibliotecas
#include <stdio.h>
//declaracion de variables
int resultado,n1,n2;
//prototipo de funcion
int producto(int x, int y);

//funcion principal
main() {
  //Entradas
  printf("Ingrese el primer Numero(entre 1 - 100 ): ");scanf("%d",&n1);
  printf("Ingrese el segundo Numero(entre 1 - 100 ): ");scanf("%d",&n2);
  //calcula y asigna el producto
  resultado=producto(n1,n2);
  printf("\nEl resultado de %d * %d es %d",n1,n2,resultado );

}
//funcion que calcula el producto de dos numeros
int producto(int x,int y){
  return (x*y);
}
