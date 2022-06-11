//Faça um programa em C que leia três números reais e imprima a média aritmética destes números.
#include <stdio.h>

int main() {
 int x, y, z, media;
 
 printf("insira os numeros reais:");
 
 scanf("%d%d%d", &x, &y, &z);
 
 media = (x + y + z) / 3;
 
 printf("a media aritmétrica eh: %d\n", media);

  return 0;
}
