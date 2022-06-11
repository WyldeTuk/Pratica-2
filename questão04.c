/*Faça um programa em C que leia a largura e o comprimento de um terreno
em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).*/

#include <stdio.h>

int main() {
  float largura, altura, area, hectares;

  printf("insira a largura em metros: ");
  scanf("%f", &largura);

  printf("insira a altura em metros: ");
  scanf("%f", &altura);

  area = (altura * largura);

  hectares = area / 10000;

  printf("Valor da area em m² é %.2f e hectares é %.2f.\n", area, hectares);

  return 0;
}
