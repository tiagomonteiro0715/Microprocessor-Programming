#include <stdio.h>
#include <ctype.h>  /* define isspace */
#include <string.h>

#define bool int
#define TRUE 1
#define FALSE 0

#define MAX_WORD_LENGTH 81
#define MAX_WORD 10
#define MAX_TEXT_LENGTH 8000

int quantas_palavras () {
    int num;
    do {
        scanf(" %d", &num);
        if ((num < 1) || (num > MAX_WORD))
            printf("O número de palavras deve ser > 0 e < %d!\n",
                   MAX_WORD);
    } while ((num < 1) || (num > MAX_WORD));
    return num;
}

void ler_substituicoes (int num, char chave[][MAX_WORD_LENGTH], char
colocar[][MAX_WORD_LENGTH]) {
}

bool le_texto(char * text, int maximo) {
}

void substitui_texto(int num, char retirar[][MAX_WORD_LENGTH], char
colocar[][MAX_WORD_LENGTH], char * text, char * text_changed) {
}

main() {
    int  n_word= 0;           // Número de palavras no array word
    char desaparecer[MAX_WORD][MAX_WORD_LENGTH]; // a substituir
    char colocar[MAX_WORD][MAX_WORD_LENGTH];  // Substituições
    char text[MAX_TEXT_LENGTH];   // Texto inicial
    char text_changed[MAX_TEXT_LENGTH]; // Texto modificado

    printf("Quantas palavras tem a lista de substituicao?\n");
    n_word = quantas_palavras ();

    printf("Introduza os textos a retirar e a colocar\n");
    ler_substituicoes(n_word, desaparecer, colocar);

    printf("Introduza o texto inicial. ");
    printf("Termine com uma linha apenas com um ponto final:\n");
    if (!le_texto(text, MAX_TEXT_LENGTH)) {
        printf("Não foi introduzido texto\n");
        return;
    }
    substitui_texto(n_word, desaparecer, colocar,
        text, text_changed);
    printf("O texto inicial eh:\n%s\n", text);
    printf("O texto substituido eh:\n%s\n", text_changed);
}
