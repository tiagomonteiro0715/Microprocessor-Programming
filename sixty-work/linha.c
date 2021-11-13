#include <stdio.h>
#include <stdlib.h>

int clearArray(char arr[], int arraySize){
  for (char i = 0; i < arraySize; i++){
    arr[i] = 0;
  }
  printf("%s \n", arr);
  printf("Vetor foi limpado");

  return(0);

}

int readArray(char arr[], int arraySize){
  printf("Write your input: \n");
  for (char i = 0; i < arraySize; i++){
    char c = getchar();
    putchar(arr[i] = c);
  }
  printf(" \n Input adicionado: %s \n", arr);
  return(0);
}

int printArray(char arr[], int arraySize){
  for (char i = 0; i < arraySize; i++){
    putchar(arr[i]);
    }
  printf(" \n Vetor foi lido");
  return 0;
}


int subsArray(char arr[], int arraySize){
  char toSubs, newVar;
  printf("Qual o caracter a substituir? \n");
  scanf("%c", &toSubs);
  char getWhiteSpace = getchar();
  printf("\nPor que caracter?");
  scanf("%c", &newVar);

  for (char i = 0; i < arraySize; i++){
    if(arr[i] == toSubs){
      arr[i] = newVar;
    }
  }
  printf("\nO caracter ' %c ' foi substituido por ' %c ' ", toSubs, newVar);
  printf("\nNovo array: %s", arr);
  return 0;
}


int count_a(char arr[], int arraySize){
  int amountVarFound = 0;
  char toCheck;
  printf("Valores do vetor ja existente: %s", arr);
  printf("Que caracter quer contar: ");
  scanf("%c", &toCheck);
  char getStupifWhiteVal = getchar();

  for (char i = 0; i < arraySize; i++){
    if(arr[i] == toCheck){
      amountVarFound += 1;
    }
  }
  printf("Existem %d ocorrencias do caracter %c", amountVarFound, toCheck);
  return 0;
}


int menu(){
  char vector[5] = {'a', 'g', 'a'};
  char getwhiteSpace;
  char textInput;
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
    getwhiteSpace = getchar();


  switch (userChoice) {
    case '1':
      clearArray(vector, 5);
      break;

    case '2':
      readArray(vector, 5);
      break;

    case '3':
       printArray(vector, 5);
       break;

    case '4':
      subsArray(vector, 5);
      break;

    case '5':
      count_a(vector, 5);
      break;

    case 's':
      printf(" \n adeus\n");
      exit(1);

    default:
      printf("Write your next Input:");
    }
  }

}





int main() {
  menu();

   return 0;
}
//ver vid freecodecamp em c sobre arrays:
