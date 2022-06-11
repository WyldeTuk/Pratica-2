/*Faça um programa em C que leia o valor da hora de trabalho e o total de horas
trabalhadas no mês e calcule o salário bruto,o salário líquido, e os impostos
descontados. Considere IR igual a 25% e INSS igual a 11%*/

#include <stdio.h>

int main() {

  float hr, totalhr, salariobruto, salarioliquido, impostosdescontados;

  printf("insira o valor da hr de trabalho: ");
  scanf("%f", &hr);

  printf("insira o total ve hrs trabalhadas: ");
  scanf("%f", &totalhr);

  salariobruto = hr * totalhr;

  salarioliquido = salariobruto / (0.25 + 0.11 + 1);

  impostosdescontados = salariobruto - salarioliquido;

  printf(" salario bruto: %.2f\n Salario liquido: %.2f\n Impostos descontados: "
         "%.2f",
         salariobruto, salarioliquido, impostosdescontados);
  return 0;
}
