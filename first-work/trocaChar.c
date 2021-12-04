/*
 * Exercício 1 - troca de sequência de caracteres
 * Ficheiro: trocaChar.c
 */
#include <stdio.h>  /* Usa biblioteca stdio */

int main() {
  /* Início da função principal */
  /* Variáveis usadas para guardar 3 caracteres */
  char caracter1 = 'a';
  char caracter2 = 'b';
  char caracter3 = 'c';
  //ou em ver disto
  //char * caracter3="c";

  /* Lê caracteres */
  printf("Introduza três caracteres: ");
  scanf("%c", & caracter1);
  scanf("%c", & caracter2);
  scanf("%c", & caracter3);
  /* Escreve caracteres pela ordem inversa */
  printf("\nInvertendo a ordem dos caracteres obtemos: ");
  printf("'%c' '%c' '%c'\n", caracter3, caracter2, caracter1);
}
