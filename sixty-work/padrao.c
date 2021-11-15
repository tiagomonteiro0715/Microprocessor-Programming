#include <stdio.h>
#include <stdlib.h>
/*
write diagonal - problem with it
*/

int writeCollumn(int matrix[][4], int row, int collumns , int chosenCollumn){//escrever coluna e escrever linha
  char writeCollumnUserInput;
  printf("What character do you want: ");
  scanf("%c", &writeCollumnUserInput);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < collumns; j++)
        {
          matrix[i][chosenCollumn] = writeCollumnUserInput;

            printf("%c\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}

int writeLine(int matrix[][4], int row, int collumns , int chosenLine){//escrever coluna e escrever linha
  char writeCollumnUserInput;
  printf("What character do you want: ");
  scanf("%c", &writeCollumnUserInput);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < collumns; j++)
        {
          matrix[chosenLine][j] = writeCollumnUserInput;

            printf("%c\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}


int writeDiagonal(int matrix[][4], int row, int collumns , char subsChar, int chosenDiagonal){//escrever coluna e escrever linha
int i;
int j;
    for (i; i < row; i++)
    {
        for (j; j < collumns; j++)
        {
          if (j == i){
            matrix[i][j] = subsChar;
          }

            printf("%c\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}

/*
=================================================================================================================
*/

int clearMatrix(int matrix[][4], int row, int collumns , char subsChar){ // escreve matrix

  for (int i = 0; i < row; i++)
  {
      for (int j = 0; j < collumns; j++)
      {
        matrix[i][j] = subsChar;

          printf("%c\t", matrix[i][j]);
      }
      printf("\n");
  }
  return 0;
}

int printMatrix(int matrix[][4], int row, int collumns){ // escreve matrix

  for (int i = 0; i < row; i++)
  {
      for (int j = 0; j < collumns; j++)
      {
          printf("%d\t", matrix[i][j]);
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
    case '1':
      writeCollumn(firstArray, 4, 4, 2);
      break;

    case '2':
      writeLine(firstArray, 4, 4, 2);
      break;


    case '3':
       writeDiagonal(firstArray, 4, 4, 'a', 2);
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
