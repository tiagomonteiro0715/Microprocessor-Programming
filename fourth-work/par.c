/*
 * sequencias e sequencias, Lda
 * Ficheiro: seq.c
 */
#include <stdio.h>
#include <stdlib.h> /* define exit() para sair do programa */

int main () {
    int i, n=0, oddSum=0;

    printf ("Introduza o limite de elementos pretendido: ");
    if (scanf (" %d", &n) != 1) {     /* Se não leu um elemento */
        printf ("Leitura do limite inválida\n");
        exit (1); /* Sai do programa */
    }
    if (n > 200) {
        printf (" Número muito elevado. Tente outra vez\n");
        exit (1);
    }
    for (i = 1; i < n; i++) {  /* i tem valores entre 1 e n-1 */
        if (!(i%2)){
          printf ("%d ", i);
        }
        if ((i%2) == 1){
          oddSum += i; 
        }

        //printf("%d \n", i);

    }
    printf("\n Some de numeros impares intermédios: %d", oddSum);
}
