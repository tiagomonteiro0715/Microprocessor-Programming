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

char wordsChosen[][MAX_WORD_LENGTH];
char wordsToReplace[][MAX_WORD_LENGTH];

void ler_substituicoes (int num, char chave[][MAX_WORD_LENGTH], char
colocar[][MAX_WORD_LENGTH]) {
printf("Termine com uma linha apenas com um ponto final\n");

printf("\nPor favor escreva os textos que pretende retirar: ");//para de ler quando encontra 1 ponto final
scanf("%s", &wordsToReplace);

char getWhiteSpace = getchar();
printf(" \n Por favor escreva os textos a colocar:");
scanf("%s", &wordsChosen);

printf("\nTexto a colocar: %s", wordsToReplace);
printf("\nTexto a retirar: %s", wordsChosen);
}

bool le_texto(char *text, int maximo) {//ir a livro ver isto

int size = strlen(text);
  if(maximo < size){
    printf("\nthat size is to high \n");
      exit(1);
  }
  return TRUE;
}


void substitui_texto(int num/*numOfWords*/, char retirar[][MAX_WORD_LENGTH], char
colocar[][MAX_WORD_LENGTH], char *text, char *text_changed) {

char *isThereChar = strstr(text, retirar);//ver se string que queremos retirar está no texto

if (isThereChar != NULL) {
size_t newlen = strlen(text) - strlen(retirar) + strlen(colocar);

printf("%c \n", retirar);

  char copyText[MAX_WORD_LENGTH];
    strcpy(text, copyText);
  char copyText_changed[MAX_WORD_LENGTH];
    strcpy(text, copyText_changed);
//ver isto
//https://www.geeksforgeeks.org/check-if-a-word-exists-in-a-grid-or-not/
//https://www.geeksforgeeks.org/search-a-word-in-a-2d-grid-of-characters/
    }
}

void main() {
    int  numOfWords= 0;           // Número de palavras no array word
    char text[MAX_TEXT_LENGTH] = "ola esta tudo bem"; // Texto inicial
/*
    char desaparecer[MAX_WORD][MAX_WORD_LENGTH] = wordsChosen[][MAX_WORD_LENGTH]; // a substituir
    char colocar[MAX_WORD][MAX_WORD_LENGTH] = wordsToReplace[][MAX_WORD_LENGTH];  // Substituições
*/
    char text_changed[MAX_TEXT_LENGTH]; // Texto modificado

    printf("Quantas palavras tem a lista de substituicao?\n");
    numOfWords = quantas_palavras();

    ler_substituicoes(numOfWords, wordsChosen, wordsToReplace);

    if (!le_texto(text, MAX_TEXT_LENGTH)) {
        printf(" \n Nao foi introduzido texto ou ele e demasiado grande\n");
    }

    substitui_texto(numOfWords, wordsChosen, wordsToReplace,
        text, text_changed);
    printf(" \nO texto inicial e:\n %s \n", text);
    printf("O texto substituido e:\n %s \n", text_changed);
}
