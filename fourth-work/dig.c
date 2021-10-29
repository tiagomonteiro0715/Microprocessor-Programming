/*
 * sequencias e sequencias, Lda
 * Ficheiro: seq.c
 */
#include <stdio.h>
#include <stdlib.h> /* define exit() para sair do programa */
/*como fazer com apenas UM switch*/
int main () {
      int Input, sucesso=0;
      int hundred, dozens, unit;
      int dozensNum;

      while (!sucesso){
      printf("Write a number:");
      scanf("%d", &Input);
      if ( Input<100 || Input>=999){
          printf("Please choose and input between 100 and 999\n");
        } else {
          printf("\nInput number: %d", Input);
          sucesso=1;
        }

      hundred = (int) Input / 100;
      dozens = Input - (hundred*100);
      dozensNum = dozens / 10;
      unit = Input - ((hundred*100) + (dozensNum*10));

      //unit = Input -(hundred + dozens)
      printf("number: %d, hundred: %d, dozensNum: %d, unit: %d", Input, hundred, dozensNum, unit);
//if k = 1, hundred variable.
        switch (hundred) {
          case 1:
           printf("O algarismo das centenas é o um");
           break;
          case 2:
            printf("O algarismo das centenas é o dois");
            break;
          case 3:
            printf("O algarismo das centenas é o tres");
           break;
          case 4:
           printf("O algarismo das centenas é o quatro");
           break;
          case 5:
            printf("O algarismo das centenas é o cinco");
            break;
          case 6:
            printf("O algarismo das centenas é o seis");
            break;
          case 7:
            printf("O algarismo das centenas é o sets");
            break;
          case 8:
            printf("O algarismo das centenas é o oito");
            break;
          case 9:
            printf("O algarismo das centenas é o nove");
            break;

            switch (hundred) {
              case 1:
               printf("O algarismo das centenas é o um");
               break;
              case 2:
                printf("O algarismo das centenas é o dois");
                break;
              case 3:
                printf("O algarismo das centenas é o tres");
               break;
              case 4:
               printf("O algarismo das centenas é o quatro");
               break;
              case 5:
                printf("O algarismo das centenas é o cinco");
                break;
              case 6:
                printf("O algarismo das centenas é o seis");
                break;
              case 7:
                printf("O algarismo das centenas é o sets");
                break;
              case 8:
                printf("O algarismo das centenas é o oito");
                break;
              case 9:
                printf("O algarismo das centenas é o nove");
                break;









        }


    }
}
