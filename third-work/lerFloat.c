/*
 * Exerc�cio 2 � Leitura de dados
 * Ficheiro: lerChar.c
 */
#include <stdio.h>

#include <stdlib.h>     /* define exit() para sair do programa */

main() {
  char c1, c2, c3, c4, c5;
  short int sucesso = 0;
  short int num;

  scanf(" %c %c %c %c %c", & c1, & c2, & c3, & c4, & c5);

  while (!sucesso) {
    for (int num; num < 5; num--) {
      if ((c1 >= '0' && c1 <= '9') && (c2 >= '0' && c2 <= '9') && (c3 >= '0' && c3 <= '9') && (c4 >= '0' && c4 <= '9') && (c5 >= '0' && c5 <= '9')) {
        printf("o valor inserido  e um numero \n");
        printf("este e o numero que inseriu: %c%c%c,%c%c  \n", c1, c2, c3, c4, c5);
        printf("formula cientifica: %ce3  \n", c1);

        exit(1);

      } else {
        printf("o programa parou, pois letra ou outro caracter foi escrito \n");
        sucesso = 1;
        exit(1);
      }
    }

  }
}
