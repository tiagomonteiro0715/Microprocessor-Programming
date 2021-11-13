#include <stdio.h>
#include <stdlib.h>


int writeCollumn(char arr[], int arraySize){//escrever coluna e escrever linha
  printf("Write your input: \n");
  for (char i = 0; i < arraySize; i++){
    char c = getchar();
    putchar(arr[i] = c);
  }
  printf(" \n Input adicionado: %s \n", arr);
  return(0);
}


int writeLine(char arr[], int arraySize){//escrever coluna e escrever linha
  printf("Write your input: \n");
  for (char i = 0; i < arraySize; i++){
    char c = getchar();
    putchar(arr[i] = c);
  }
  printf(" \n Input adicionado: %s \n", arr);
  return(0);
}


int writeDiagonal(char arr[], int arraySize){//escrever coluna e escrever linha
  printf("Write your input: \n");
  for (char i = 0; i < arraySize; i++){
    char c = getchar();
    putchar(arr[i] = c);
  }
  printf(" \n Input adicionado: %s \n", arr);
  return(0);
}

/*
=================================================================================================================
*/



int clearMatrix(char arr[], int arraySize){//usar esta como limpa matrix
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




int printMatrix(int matrix, int row, int collumns){ // escreve matrix
  for (row=0; row<row+1 ; row++)
  {
      for(collumns=0; collumns<collumns + 1; collumns++)
      {
           printf("%d     ", matrix[row][collumns]);
      }
      printf("\n");
  }
  return 0;
}

/*
=================================================================================================================
*/

int menu(){
  int firstArray[4][4] = { {1, 1, 1, 1},
                            {2, 2, 2, 2},
                            {3, 3, 3, 3},
                            {4, 4, 4, 4}};
  char getwhiteSpace;
  char userChoice;
  int userChoiceSucess = 0;


  printf("/*******************PROGRAMA LINHA********************/ \n");
  printf("1- Escrever coluna \n");
  printf("2- escrever linha \n");
  printf("3- escrever diagonal \n");
  printf("4- limpa matriz \n");
  printf("5- escreve matriz \n");
  printf("s- Sair \n");
  printf("O que pretende fazer? "); //criar loop até dar valor aceitavel e tambem explorar outras defenições do switch

  while(!userChoiceSucess){
    scanf("%c", &userChoice);
    getwhiteSpace = getchar();


  switch (userChoice) {
    /*
    case '1':
      writeCollumn(firstArray, 5);
      break;

    case '2':
      writeLine(firstArray, 5);
      break;

    case '3':
       writeDiagonal(firstArray, 5);
       break;

    case '4':
      clearMatrix(firstArray, 5);
      break;
*/
    case '5':
      printMatrix(firstArray, 4, 4);
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
