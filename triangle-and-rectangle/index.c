#include <stdio.h>

// Calculador de Área de um Triângulo e Retângulo
int main (void) {
  float base, height, triangle, rectangle;

  printf("Informe a base: ");
  scanf("%f", &base);

  printf("Informe a altura: ");
  scanf("%f", &height);

  triangle = (base * height) / 2;
  rectangle = base * height;

  printf(" \n");
  printf("---------------------------\n");
  printf(" \n");

  printf("Δ Área do Triângulo: %.2f\n", triangle);
  printf("□ Área do Retângulo: %.2f", rectangle);

  return 0;
}
