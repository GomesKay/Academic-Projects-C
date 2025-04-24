#include <stdio.h>

// Conversão de Reais para Dólares
int main (void) {
  float real;
  float dollar;
  float dollarPrice = 4.99;

  printf("Informe o valor em reais: ");
  scanf("%f", &real);

  dollar = real / dollarPrice;
  printf("Você tem %.2f dólares", dollar);
  
  return 0;
}
