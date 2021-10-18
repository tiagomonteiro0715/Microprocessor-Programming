/*
 * Exercício 2 - média de inteiros short
 * Ficheiro: mediaSInt.c
 */
#include <stdio.h>

main() {
    const int NUMERO= 3; /* CONSTANTE com número de elementos */
    /* Variáveis para guardar Dados */
    unsigned long long int val1=0, val2=0, val3=0;
    unsigned long long int total; /* Variável para guardar valor total */
    unsigned long long int media; /* Variável para guardar média */

    /* Lê valores */
    printf("introduza os três valores:");
    scanf(" %hu %hu %hu", &val1, &val2, &val3);

    total= val1+val2+val3; /* Calcula a soma */
    media= total/NUMERO;  /* Calcula a divisão inteira */

    printf("\n"); /* Acrescenta uma linha em branco */
    /* Escreve o resultado */
    printf("A soma dos valores é %hu e a média é %hu\n", total, media);
}

