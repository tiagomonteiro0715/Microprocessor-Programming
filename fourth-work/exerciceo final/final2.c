#include <stdio.h>

#include <stdlib.h>

int main() {
  char i;
  int h = 0, m = 0, s = 0, nh = 0;
  long int tempo_seg;

  printf("Introduza o tempo no formato h(hora) m(minuto) s(segundo):\n");
  do {
    scanf(" %c", & i);

    if (i == 'h' && nh) {
      printf("Erro:horas duplicado\n");
      exit(1);
    }
    if (i == 'm' && m) {
      printf("Erro: minutos duplicado\n");
      exit(1);
    }
    if (i == 's' && s) {
      printf("Erro: segundos duplicado\n");
      exit(1);
    }

    switch (i) {
    case 'h':
      scanf("%d", & h);
      nh++;
      break;
    case 'm':
      scanf("%d", & m);
      break;
    case 's':
      scanf("%d", & s);
      break;
    }
  }

  while (i == 'h' || i == 'm' || i == 's');
  if (m > 59)
    printf("Erro: número de minutos inválidos\n");
  else
  if (s > 59)
    printf("Erro: número de segundos inválido\n");
  else {
    tempo_seg = (h * 3600) + (m * 60) + s;
    printf("Leu %dh %dm %ds = %ld segundos\n", h, m, s, tempo_seg);
  }
}
