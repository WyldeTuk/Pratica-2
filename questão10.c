/*Faça um programa em C que leia um número inteiro e imprima a tabuada de
 * multiplicação.*/

#include <stdio.h>

int main() {

  int x, y, r;

  printf("insira um valor para a tabela: ");
  scanf("%d", &x);

  for (y = 0; y < 100; y++) {

    r = x * y;
    if (y % 2 != 1)
      printf("\n");
    printf("      %d x %d = %d     \t", x, y, r);
  }
  printf("\n");
  return 0;
}
