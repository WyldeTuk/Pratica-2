/*Faça um programa em C que leia um número inteiro e imprima o caractere
 * correspondente na tabela ASCII.*/

#include <stdio.h>

int main() {

  int i, e;

  printf("insira um numero inteiro: ");
  scanf("%d", &e);

  for (i= 33; i < 255; i++) {

    if (i % 10 == 0)
      printf("\n");
    printf("%d = %c\t", i, i);
  }

  printf("\n\n%c", e);

  return 0;
}
