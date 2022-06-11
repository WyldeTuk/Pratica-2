/*Faça um programa em C que leia opeso e a altura de uma pessoa
e calcule o índice de massa corporal (imc = peso / altura²).*/

#include <math.h>
#include <stdio.h>

int main() {

  float peso, altura, indice;

  printf("insira o peso: ");
  scanf("%f", &peso);

  printf("insira a altura: ");
  scanf("%f", &altura);

  indice = peso / (pow(altura, 2));

  printf("%.2f\n", indice);

  return 0;
}
