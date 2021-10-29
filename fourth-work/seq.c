/*
 * sequencias e sequencias, Lda
 * Ficheiro: seq.c
 */
#include <stdio.h>
#include <stdlib.h> /* define exit() para sair do programa */

int main () {
    int i, n=0;

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
        if (!(i%4)){
          printf ("%d ", i);
        }


        printf("%d \n", i);

    }
}
