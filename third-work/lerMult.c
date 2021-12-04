/*
 * Exerc�cio 2 - m�dia de inteiros short
 * Ficheiro: mediaSInt.c
 */
#include <stdio.h>

main() {
  const int NUMERO = 3; /* CONSTANTE com n�mero de elementos */
  /* Vari�veis para guardar Dados */
  short int val1 = 0, val2 = 0, val3 = 0;
  short int total; /* Vari�vel para guardar valor total */
  short int media; /* Vari�vel para guardar m�dia */

  /* L� valores */
  printf("introduza os tr�s valores:");
  scanf(" %hd %hd %hd", & val1, & val2, & val3);

  total = val1 + val2 + val3; /* Calcula a soma */
  media = total / NUMERO; /* Calcula a divis�o inteira */

  printf("\n"); /* Acrescenta uma linha em branco */
  /* Escreve o resultado */
  printf("A soma dos valores � %hd e a m�dia � %hd\n",
    total, media);
}
