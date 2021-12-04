/*
 * Tabuada
 * Ficheiro: tabuada.c
 */
#include <stdio.h>

#include <stdlib.h> /* define exit() para sair do programa */


int mult(int a, int b) {
  return a * b;
}

int tabuada(int number) {
  for (int i = 1; i < 11; i++) {
    printf("%d x %d = %d \n", number, i, mult(number, i));
  }
}

int main() {
  int Input;

  printf("Que tabuada quer (1 a 9)? : ");
  if (scanf(" %d", & Input) != 1) {
    /* Se não leu um elemento */
    printf("Leitura do limite inválida\n");
    exit(1); /* Sai do programa */
  }
  if ((Input < 1) || (Input > 9)) {
    printf(" Número incorrecto. Tente outra vez\n");
    exit(1);
  }

  tabuada(Input);
}
