/*
 * Exerc�cio 2 - m�dia de inteiros short
 * Ficheiro: mediaSInt.c
 */
#include <stdio.h>

void main() {
  const int NUMERO = 3; /* CONSTANTE com n�mero de elementos */
  /* Vari�veis para guardar Dados */
  int val1 = 0, val2 = 0, val3 = 0;
  int total; /* Vari�vel para guardar valor total */
  float media; /* Vari�vel para guardar m�dia */
  float resto; /* Vari�vel para guardar m�dia */

  /* L� valores */
  printf("introduza os tr�s valores:");
  scanf(" %d %d %d", & val1, & val2, & val3);

  total = val1 + val2 + val3;
  media = total / NUMERO; /* Calcula a divis�o inteira */
  resto = total % NUMERO; /* Calcula a divis�o inteira */

  printf("\n"); /* Acrescenta uma linha em branco */

  /* Escreve o resultado */
  printf(" %d \n", total)
  printf(" %lf \n", media)
  //#https://stackoverflow.com/questions/499939/how-to-extract-the-decimal-part-from-a-floating-point-number-in-c#define
  //posso usar isto?
  printf(" %0.5lf \n", resto);

  //printf(" %d + %d + %d e %d %d \n ", val1, val2, val3, media, resto);
}
