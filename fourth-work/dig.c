/*
 * sequencias e sequencias, Lda
 * Ficheiro: seq.c
 */
#include <stdio.h>

#include <stdlib.h> /* define exit() para sair do programa */

/*como fazer com apenas UM switch*/
int main() {
  int Input, sucesso = 0, varTemp;
  int hundred, dozens, unit;
  int dozensNum;

  while (!sucesso) {
    printf("Write a number:");
    scanf("%d", & Input);
    if (Input < 100 || Input >= 999) {
      printf("Please choose and input between 100 and 999\n");
      scanf("%d", & Input);
    } else {
      printf("\nInput number: %d \n", Input);
    }

    hundred = (int) Input / 100;
    dozens = Input - (hundred * 100);
    dozensNum = dozens / 10;
    unit = Input - ((hundred * 100) + (dozensNum * 10));

    for (int i = 1; i <= 3; i += 1) {
      if (i == 1) {
        varTemp = hundred;
        printf("O algarismo das centenas e o ");
      }

      if (i == 2) {
        varTemp = dozensNum;
        printf("O algarismo das dezenas e o ");
      }

      if (i == 3) {
        varTemp = unit;
        printf("O algarismo das unidades e o ");
      }

      switch (varTemp) {
      case 1:
        printf("um \n");
        break;
      case 2:
        printf("dois \n");
        break;
      case 3:
        printf("tres\n");
        break;
      case 4:
        printf("quatro\n");
        break;
      case 5:
        printf("cinco\n");
        break;
      case 6:
        printf("seis\n");
        break;
      case 7:
        printf("sets\n");
        break;
      case 8:
        printf("oito\n");
        break;
      case 9:
        printf("nove\n");
        break;

      }

    }
  }
}
