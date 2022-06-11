/*Faça um programa em C que leia uma temperatura em graus Celsius e calcule o
 * valor correspondente em graus Fahrenheit (B0F = 9/5B0C + 32)*/
#include <stdio.h>

int main() {

  float c, f;

  printf("insira o valor em C:");
  scanf("%f", &c);

  f = (9 * c + 160) / 5;

  printf("%.2f\n", f);
  return 0;
}
