#include <stdio.h>

#include <stdlib.h>

int main() {

  int valhour1 = 0, valmin1 = 0, valsec1 = 0;
  int valhour2 = 0, valmin2 = 0, valsec2 = 0;
  short int valday = 0, valday1 = 0, valday2 = 0;
  int valhour = 0, valmin = 0, valsec = 0;

  printf("Introduza o tempo no.1 (dia)d (hora)h (minuto)m (segundo)s ");
  printf("\n");
  scanf(" %hd %d %d %d", & valday1, & valhour1, & valmin1, & valsec1);
  printf("\n");
  printf(" %hd d %d h %d m %d s ", valday1, valhour1, valmin1, valsec1);
  printf("\n");
  printf("Introduza o tempo no.1 (dia)d (hora)h (minuto)m (segundo)s \n");
  scanf(" %hd %d %d %d", & valday2, & valhour2, & valmin2, & valsec2);

  int totalSec1 = valsec1 + (60 * valmin1) + (3600 * valhour1) + (86400 * valday1);
  int totalSec2 = valsec2 + (60 * valmin2) + (3600 * valhour2) + (86400 * valday2);
  unsigned long int totalSec = totalSec2 - totalSec1;

  printf("%d - %d = %d \n", totalSec2, totalSec1, totalSec);

  totalday = totalsec / 86400
  totalhour = totalsec % 86400 / 3600
  totalminute = totalsec % 86400 % 3600 / 60
  totalsecond = totalsec % 86400 % 3600 % 60

  printf("A diferenca entre os dois tempos e de %u segundos = %hd d %d h %d m %d s",
    totalSec,
    valday,
    valhour,
    valmin,
    valsec
  );

  return 0;
}
