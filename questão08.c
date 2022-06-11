/*Faça um programa em C que leia as coordenadas de dois pontos
(x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)²
+ (y2-y1)²))*/

#include <math.h>
#include <stdio.h>

int main() {

  float x1, x2, y1, y2, d;

  printf("Insira os valores da coordenada (x1,y1): ");
  scanf("%f %f", &x1, &y1);

  printf("insira os valores da cordenada (x2,y2): ");
  scanf("%f %f", &x2, &y2);

  d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("A distancia entre eles é: %f", d);

  return 0;
}
