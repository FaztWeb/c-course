#include <stdio.h>
#include <math.h>
int main(void) {
  int opcion=0;
  float radio=0,diametro,perimetro,area;

  while (opcion != 4) {
    printf("Escoge una opción: \n" );
    printf("%s\n","1)Calcula el Diamtro. " );
    printf("%s\n","2)Calcula el Perimetro. " );
    printf("%s\n","3)Calcula el Area. " );
    printf("%s", "Teclea 1,2,3,o 4 y luego pulsa ENTER: ");
    scanf("%d",&opcion );
    printf("%s", "Dame el radio de un Circulo: ");
    scanf("%f",&radio );
    if (opcion == 1) {
      diametro=2*radio;
      printf("El diametro es %f\n",diametro );
    }else if(opcion==2){
      perimetro=2*M_PI*radio;
      printf("El perimetro es %f\n",perimetro);
    }else if(opcion==3){
      area=M_PI*radio*radio;
      printf("El area es %f\n",area );
    }else if(opcion <0 || opcion>4 ){
      printf("Solo hay cuatro opciones 1,2,3,4. tu has tecleado %d\n",opcion );
    }
  }
  return 0;
}
