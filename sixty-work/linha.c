#include <stdio.h>
#include <stdlib.h>

int vetorBranco(char arr[], int arraySize){
  for (char i = 0; i < arraySize; i++){
    arr[i] = 0;
  }
}

int lerVetor(char text, char storeArr[], int arraySize){
  printf("Escreva as letras para o seu vetor");
  for (char i = 0; i < arraySize; i++){
    text = getchar();
    storeArr[text];
  }
  prinf("%f", storeArr[]);
}

}

int imprimirVetor(char arr[], int arraySize){
  for (char i = 0; i < arraySize; i++){
    putchar(arr[i]);

    }
}


int subsVetor(char arr[], int arraySize){
  for (char i = 0; i < arraySize; i++){
    if(arr[i] == 'a'){
      arr[i] = 'b';
    }
  }
}

int contaVetor(char arr[], int arraySize){
  int arrayLen;
  for (char i = 0; i < arraySize; i++){
    if(arr[i] == 'a'){
      arrayLen += 1;
    }
  }
  return printf("%d", arrayLen + 1);
}

int menu(){
  char vector[19] = {'a', 'g', 'a'};

  char textInput;
  char printedInputText[19];
  char userChoice;
  int userChoiceSucess = 0;


  printf("/*******************PROGRAMA LINHA********************/ \n");
  printf("1- limpar vetor \n");
  printf("2- ler e introduzir valores \n");
  printf("3- mostrar o vetor \n");
  printf("4- substituir caracter \n");
  printf("5- contar caracter \n");
  printf("s- Sair \n");
  printf("O que pretende fazer? "); //criar loop até dar valor aceitavel e tambem explorar outras defenições do switch

  while(!userChoiceSucess){
    scanf("%c", &userChoice);

  switch (userChoice) {
    case '1':
      userChoiceSucess = 1;
      vetorBranco(vector, 19);

      printf("%s \n", vector);
      printf("Vetor foi limpado");

      break;
    case '2':
      userChoiceSucess = 1;
      lerVetor(textInput, );
      break;
    case '3':
     imprimirVetor(vector, 19);
     printf("Vetor foi lido");

      userChoiceSucess = 1;
      break;
    case '4':
      userChoiceSucess = 1;
      printf("%s \n", vector);
      subsVetor(vector, 19);
      printf("%s \n", vector);
      printf("Caracter a foi substituido por b");

      break;
    case '5':
      userChoiceSucess = 1;
      printf("%s \n", vector);

      contaVetor(vector, 19);
      break;
    case 's':
      printf("adeus\n");
      exit(1);
    default:
      printf("Plase choose one of the options above \n\n");
      break;
    }
  }

}





int main() {
  menu();

   return 0;
}
//ver vid freecodecamp em c sobre arrays:
