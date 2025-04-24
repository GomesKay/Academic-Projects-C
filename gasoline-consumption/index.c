#include <stdio.h>

// Consumo de Gasolina
int main (void) {
  int distancia;
  float combustivelGasto, consumoMedio;

  printf("Distância Percorrida: ");
  scanf("%d", &distancia);

  printf("Combustível Gasto: ");
  scanf("%f", &combustivelGasto);

  consumoMedio = distancia / combustivelGasto;
  printf("%.3f km/l", consumoMedio);

  return 0;
}
