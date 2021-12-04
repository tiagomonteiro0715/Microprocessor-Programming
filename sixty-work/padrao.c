#include <stdio.h>

#include <stdlib.h>

/*
write diagonal - problem with it
*/

int writeCollumn(char matrix[][4], int row, int collumns, int chosenCollumn) { //escrever coluna e escrever linha
  char writeCollumnUserInput;
  printf("What character do you want: ");
  scanf("%c", & writeCollumnUserInput);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < collumns; j++) {
      matrix[i][chosenCollumn] = writeCollumnUserInput;

      printf("%c\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;

}

int writeLine(char matrix[][4], int row, int collumns, int chosenLine) { //escrever coluna e escrever linha
  char writeCollumnUserInput;
  printf("What character do you want: ");
  scanf("%c", & writeCollumnUserInput);

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < collumns; j++) {
      matrix[chosenLine][j] = writeCollumnUserInput;

      printf("%c\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;

}

int writeDiagonal(char matrix[][4], int row, int collumns, char subsChar, int chosenDiagonal) { //escrever coluna e escrever linha
  for (int i = chosenDiagonal; i < row; i++) {
    matrix[i][i] = subsChar;
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < collumns; j++) {
      printf("%c\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;

}
/*
=================================================================================================================
*/

int clearMatrix(char matrix[][4], int row, int collumns, char subsChar) { // escreve matrix

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < collumns; j++) {
      matrix[i][j] = subsChar;

      printf("%c\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}

int printMatrix(char matrix[][4], int row, int collumns) { // escreve matrix

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < collumns; j++) {
      printf("%c\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}

/*
=================================================================================================================
*/

int menu() {
  char firstArray[4][4] = {
    {
      'a',
      '2',
      't',
      '1'
    },
    {
      '2',
      'b',
      '2',
      't'
    },
    {
      '1',
      '2',
      'u',
      't'
    },
    {
      'b',
      '1',
      't',
      'b'
    }
  };
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
  printf("O que pretende fazer? "); //criar loop até dar valor aceitavel e tambem explorar outras defenições

  while (!userChoiceSucess) {

    scanf("%c", & userChoice);
    getwhiteSpace = getchar();

    switch (userChoice) {
    case '1':
      writeCollumn(firstArray, 4, 4, 2);
      break;

    case '2':
      writeLine(firstArray, 4, 4, 2);
      break;

    case '3':
      writeDiagonal(firstArray, 4, 4, 'a', 3);
      break;

    case '4':
      clearMatrix(firstArray, 4, 4, 'a');
      break;

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
