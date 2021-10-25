/*
 * Exercício 1 - cálculo da data anterior
 * Ficheiro: data.c
 */
#include <stdio.h>

main() {
    unsigned int ano1, mes1, dia1;
    unsigned int ano2, mes2, dia2;

    printf("Escreva para a data1 o dia mes ano como inteiros: \n ");
    scanf(" %d %d %d", &dia1, &mes1, &ano1);

    printf("Escreva para a data2 o dia mes ano como inteiros: \n");
    scanf(" %d %d %d", &dia2, &mes2, &ano2);

    /* Calcula qual a data anterior */
    if (ano2 > ano1) {
        printf("A data 1 e anterior a data 2");
    }else if (ano2 < ano1) {
        printf("A data 1 nao e anterior a data 2");
    }


    //----------------------------------------------------------------------------------------

    if (ano2=ano1){
        printf("Data 1 e Data 2 tem o mesmo ano \n");

        if (mes2 > mes1) {
        printf("A data 1 e anterior a data 2");
        }else if (mes2 < mes1) {
        printf("A data 1 nao e anterior e data 2");
        }

        if (mes2 = mes1) {
        printf("Data 1 e Data 2 tem o mesmo mes \n");

        if (dia2 > dia1) {
        printf("A data 1 e anterior a data 2");
        }else if (dia2 < dia1) {
        printf("A data 1 nao e anterior e data 2");
        }else if (dia2 == dia1){
        printf("A data 1 e igual a data 2");
        }
        }
    }
}
