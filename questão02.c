/*Faça um programa em C que leia dois números inteiros
e imprima o quociente e o resto da divisão entre eles.*/
#include <stdio.h>

int main() {
  int x, y, quociente, resto;

  printf("insira os numeros da divisão:");

  scanf("%d%d", &x, &y);

  quociente = x / y;

  resto = x % y;

  printf("o quociente é %d e o resto é %d\n", quociente, resto);

  return 0;
}
