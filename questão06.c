/*Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano
de depreciação e calcule o valor depreciado de um veículo
(depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de
compra).*/

#include <stdio.h>

int main() {

  int afabricação, adepreciação, compra, depreciação;

  printf("Insira o valor da compra: ");
  scanf("%d", &compra);

  printf("Insira o ano de fabricação e o ano de depreciação: ");
  scanf("%d%d", &afabricação, &adepreciação);

  depreciação = (adepreciação - afabricação) * 0.01 * compra;

  printf("O valor da depreciação é %d", depreciação);

  return 0;
}
