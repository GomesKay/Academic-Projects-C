#include <stdio.h>
#include <time.h>

// Calculadora IMC
int main(void) {
  float imc;
  float height;
  float weight;
  
  printf("Informe sua altura: ");
  scanf("%f", &height);
  
  printf("Informe seu peso: ");
  scanf("%f", &weight);
  
  imc = weight / (height * height);
  printf("Seu IMC é %.2f", imc);
  
  return 0;
}
