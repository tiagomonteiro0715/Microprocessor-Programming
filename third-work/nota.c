/*
 * Exercício 2 - cálculo da nota final de PM
 * Ficheiro: nota.c
 */
#include <stdio.h>

main() {
    /* Dados do aluno */
    unsigned int nota_teorica= 0, nota_pratica= 0, faltas= 0;
    float media;   /* média final */
    unsigned int nota_final; /* nota final */

    printf("Calculo da nota final a PM\n\n");
    printf("Introduza os seguintes dados:\n");
    printf("\tNumero de faltas nos trabalhos praticos: ");
    scanf("%d", &faltas);
    printf("\tNota dos trabalhos praticos: ");
    scanf(" %d", &nota_pratica);
    printf("\tNota dos testes e exames: ");
    scanf(" %d", &nota_teorica);
    /* Calcula média */
    if (faltas > 3) {
   printf("Reprovou a disciplina por faltas\n");
    } else if (faltas == 3){
    media= 0.5*nota_pratica + 0.5*nota_teorica;
    nota_final= (int)(media+0.5);

        if (media > 12){
            media = 12;
            nota_final = media;
            printf("Como o aluno teve 3 faltas, a nota maxima e de 12 valores \n");
        }

       /* Arredonda real a 0.5 e converte para int! */
   printf("Aprovado com a nota final de %d valores (%.1f)\n",
         nota_final, media); /* Escreve só 1 casa decimal */
    } else if (faltas == 2){

        if (nota_pratica > 14) {
            nota_pratica = 14;
            printf("Como o aluno teve 2 faltas, a nota maxima pratica e de 14 valores \n");


        }
    media = 0.5*nota_pratica + 0.5*nota_teorica;

    nota_final = (int)(media+0.5);

       /* Arredonda real a 0.5 e converte para int! */
   printf("Aprovado com a nota final de %d valores (%.1f)\n",
         nota_final, media); /* Escreve só 1 casa decimal */


    }
}
