/*
 * Tabuada
 * Ficheiro: tabuada.c
 */

/*Exemplo

Que tabuada quer (1 a 9)? : 5

  5 x 1 = 5
  5 x 2 = 10
  5 x 3 = 15
  5 x 4 = 20
  5 x 5 = 25
  5 x 6 = 30
  5 x 7 = 35
  5 x 8 = 40
  5 x 9 = 45

Que tabuada quer (1 a 9)? :


*/
#include <stdio.h>
#include <stdlib.h> /* define exit() para sair do programa */



int mult (int a, int b)
{
   return a * b;
}

int tabuada(int number){
  for(int i = 1; i < 11; i++){
    printf("%d x %d = %d \n",number , i, mult(number, i));
  }
}

int main () {
    int Input;

    printf ("Que tabuada quer (1 a 9)? : ");
    if (scanf (" %d", &Input) != 1) {     /* Se não leu um elemento */
        printf ("Leitura do limite inválida\n");
        exit (1); /* Sai do programa */
    }
    if ((Input < 1) || (Input > 9)) {
        printf (" Número incorrecto. Tente outra vez\n");
        exit (1);
    }

    tabuada(Input);
}
