#include <math.h>
#include <stdio.h>

// Distância Entre Dois Pontos
int main (void) {
  float x1, x2, y1, y2, distancia;

  printf("Insira o valor de X1: ");
  scanf("%f", &x1);
  
  printf("Insira o valor de X2: ");
  scanf("%f", &x2);
  
  printf("Insira o valor de Y1: ");
  scanf("%f", &y1);
  
  printf("Insira o valor de Y2: ");
  scanf("%f", &y2);

  distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("A distância é: %.4f", distancia);
  
  return 0;
}
