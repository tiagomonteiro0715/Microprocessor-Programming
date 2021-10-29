/*
 * Exerc�cio Final - Menu
 * Ficheiro: menu.c
 */
#include <stdio.h>
/*
2.  perguntado para repetir a escolha que fez antes desta, e ele tem de introduzir
o car�cter correspondente � escolha que fez antes desta.


*/
char Input=' ', prevChoiceInput='0', choiceInput=' ';
int firstStep = 0 ;
int sucess = 0;

int main() {
    /* declara��o de vari�veis */

    /* escrever menu */
    do {
      printf (" \n MENU para broncos\n ");
      printf ("1 � A op��o que escolheu foi 1\n");
      printf ("2 � Escolheu a segunda op��o\n");
      printf ("3 � Agora escreveu um tr�s\n");
      printf ("4 � A tecla que carregou foi um quatro\n");
      printf ("s � Escreveu um �s�\n");
      printf ("t � Esta foi a op��o do �t�\n");
      printf ("f � Sair\n\n");
      printf("------------------------------------------  \n");

    printf("Escolha uma opcao:");
     scanf(" %c", &Input);

     switch(Input){
        case '1':
            printf("1 � A op��o que escolheu foi 1\n\n\n");
            break;
        case '2':
            printf("2 - Escolheu a segunda op��o\n\n\n");
            break;
        case '3':
            printf("3 - Agora escreveu um tr�s\n\n\n");
            break;
        case '4':
            printf("4 - A tecla que carregou foi um quatro\n\n\n");
            break;
        case 's':
            printf("s - Escreveu um 's' \n\n\n");
            break;
        case 't':
            printf("t - Esta foi a op��o do 't' \n\n\n");
            break;
        case 'f':
            printf("f - Sair \n\n\n");
            sucess = 1;
            break;
        }

    printf("Qual foi a op��o que escolheu antes desta?");

    getchar();
    choiceInput = getchar();

    if (prevChoiceInput == choiceInput) {
      printf("Muito bem \n");
      prevChoiceInput = Input;
    } else{
      printf("\n Falhou! A opção era a %c", prevChoiceInput);
      prevChoiceInput = Input;
    }


    } while(!sucess);



}
