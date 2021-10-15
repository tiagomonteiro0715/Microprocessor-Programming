#include <stdio.h>  /* Usa biblioteca stdio */

int main() { /* Início da função principal */
    /* Variáveis usadas para guardar 3 caracteres */
    char caracter1, caracter2, caracter3;

    printf("Introduza três caracteres: ");
    /*
    Lê caracteres
    scanf(" %c ", &caracter1);
    scanf(" %c ", &caracter2);
    scanf(" %c", &caracter3);
    */

    caracter1 = getchar();
    caracter2 = getchar();
    caracter3 = getchar();

    putchar(caracter1);
    putchar(caracter2);
    putchar(caracter2);

    /* Escreve caracteres pela ordem inversa */
    printf("\nInvertendo a ordem dos caracteres obtemos: ");
  printf("'%c' '%c' '%c'\n", caracter3, caracter2, caracter1);
}

/*links that will help me




*/

