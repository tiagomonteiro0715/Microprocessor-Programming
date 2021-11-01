#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//fase de preparação
int prepPlayerChoice;
int playerAttemptsChoice;
int playerGameLevelChoice;
int numero_misterio;

//fase de execução
int gameNum;
int playerAttempts;
int originalPlayerAttempts;
/*
melhores printf caso o player faça a escolha certa
tenho 1 numero para "numero_misterio". presiso de outro
*/
void mysteryNum(){
  srand(time(NULL));
  numero_misterio = 1 + rand () % 3;
}

int gameLevel(int Input){
 int playerGameLevelChoiceSucess = 0;

 if (Input == numero_misterio){
   playerGameLevelChoice = numero_misterio;
   return playerGameLevelChoice;

 }

  while(!playerGameLevelChoiceSucess){
      printf("Escolha um nivel de jogo: \n");
      printf("Nivel 1: numero misterio entre 1 e 100 (1)\n");
      printf("Nivel 2: numero misterio entre 1 e 1 000 (2)\n");
      printf("Nivel 3: numero misterio entre 1 e 10 000 (3)\n");

      printf("Escolha:"),
    scanf("%d", &Input);

    if (Input==1 || Input==2 || Input==3){
      printf("Good job \n");
      playerGameLevelChoice = Input;
      playerGameLevelChoiceSucess = 1;
    }else{
        printf("Erro na introducao de dados. Por favor escolha 1, 2 ou 3 \n");
      }


 }
  return playerGameLevelChoice;
}
//----------------------------------------------------------------------------------------------
int maxAttemptsChoice(int input){
  int playerAttemptsChoiceSucess = 0;

  if (input == numero_misterio){
    playerAttemptsChoice = numero_misterio;
    return playerAttemptsChoice;
  }

  printf("Escolha o numero de tentativas: \n");
  printf("Tentativas 1: 10 (1)\n");
  printf("Tentativas 2: 15  (2)\n");
  printf("Tentativas 3: 20 (3)\n");

  while(!playerAttemptsChoiceSucess){
    printf("Escolha:"),
    scanf("%d", &input);

    if (input==1 || input==2 || input==3){
      playerAttemptsChoiceSucess = 1;
      playerAttemptsChoice = input;
    }else{
        printf("Erro na introducao de dados. Por favor escolha 1, 2 ou 3 \n");
      }

    }
  return playerAttemptsChoice;
}

//----------------------------------------------------------------------------------------------

int chooseGameVals(){
  mysteryNum();
  int prepPlayerChoiceSucess = 0;

  printf("Valores por sorteio (1) ou manuais (2): ");

while(!prepPlayerChoiceSucess){
  scanf("%d", &prepPlayerChoice);
  if (prepPlayerChoice==1){
    gameLevel(numero_misterio);
    maxAttemptsChoice(numero_misterio);
    prepPlayerChoiceSucess = 1;

  } else if (prepPlayerChoice==2){
   gameLevel(playerGameLevelChoice);
   maxAttemptsChoice(playerAttemptsChoice);

   prepPlayerChoiceSucess = 1;
  }
  else{
      printf("Erro na introdução de dados. Por favor escolha sorteio(1) ou manual(2) \n");
    }
}
  printf("Estamos a jogar com o ");
          switch (playerGameLevelChoice) {
            case 1:
             printf("nivel 1 (1 e 100)");
             gameNum = 1 + rand () % 101;
             break;
            case 2:
              printf("nivel 2 (1 e 1 000)");
              gameNum = 1 + rand () % 1001;
              break;
            case 3:
              printf("nivel 3 (1 e 10 000)");
              gameNum = 1 + rand () % 10001;
          }
printf(" e com o maximo de tentativas de ");
          switch (playerAttemptsChoice) {
            case 1:
             printf("10 \n");
             playerAttempts = 10;
             originalPlayerAttempts = 10;
             break;
            case 2:
              printf("15 \n");
              playerAttempts = 15;
              originalPlayerAttempts = 15;
              break;
            case 3:
              printf("20\n");
              playerAttempts = 20;
              originalPlayerAttempts = 20;
          }
}

int jogo(){
  int gameSucess = 1;
  int playerChoice;
  char doesGameContinue;

  do{
    printf("\n\nDiga um numero: \n");
    scanf("%d", &playerChoice);

    if (playerChoice > gameNum){
      printf("O numero misterio esta abaixo \n");
      playerAttempts -= 1;
      printf("Ainda tem %d tentativas", playerAttempts);
      printf("\n ..................................");
    }else if (playerChoice < gameNum){
      printf("O numero misterio esta acima \n");
      playerAttempts -= 1;
      printf("Ainda tem %d tentativas", playerAttempts);
      printf("\n ..................................");
    }else if(playerChoice == gameNum){
      printf("Parabens! \n Acertou em %d tentativas", originalPlayerAttempts - playerAttempts);
      printf("Quer jogar outra vez (s ou n):");
      scanf("%d", &doesGameContinue);
      if (doesGameContinue == 's'){
        printf("Have fun! \n");
      }else if (doesGameContinue == 'n'){
        printf("adeus \n");
        gameSucess = 0;
      }

    }
  }

    if (playerAttempts == 0){
      printf("Ficou sem tentativas. O numero misterioso é %d", gameNum);
      printf("Quer jogar outra vez (s ou n):");
      scanf("%d", &doesGameContinue);
      if (doesGameContinue == 's'){
        printf("Have fun! \n");
      }else if (doesGameContinue == 'n'){
        printf("adeus \n");
        gameSucess = 0;

      }
    }
  }while(!gameSucess);

}
int main () {
    printf("********   JOGO DO SOBE E DESCE  ************* \n" );
    chooseGameVals();
    jogo();
    return 0;
}
