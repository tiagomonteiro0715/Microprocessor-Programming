#include <stdio.h>
#include <stdlib.h>
/*
deve apresentar no msm formato
programa lida com o maximo 1000 dias == 86 400 000 segundos
*/
/*
depois de estar feito - tratar melhor das variaveis + melhor nome de variaveis
ver o que fizeram nos exerciceos propostos
*/
int main()
{

        int valhour1=0, valmin1=0, valsec1=0 ;
        int valhour2=0, valmin2=0, valsec2=0 ;
        short int valday=0, valday1=0, valday2=0;
        int valhour=0, valmin=0, valsec=0 ;


        printf("Introduza o tempo no.1 (dia)d (hora)h (minuto)m (segundo)s ");
        printf("\n");
        scanf(" %hd %d %d %d", &valday1, &valhour1, &valmin1, &valsec1);
        printf("\n");
        printf(" %hd d %d h %d m %d s ", valday1, valhour1, valmin1, valsec1);
        printf("\n");
        printf("Introduza o tempo no.1 (dia)d (hora)h (minuto)m (segundo)s \n");
        scanf(" %hd %d %d %d", &valday2, &valhour2, &valmin2, &valsec2);



        int totalSec1 = valsec1 + (60 * valmin1) + (3600 * valhour1) + (86400 * valday1);
        int totalSec2 = valsec2 + (60 * valmin2) + (3600 * valhour2) + (86400 * valday2);
        unsigned long int totalSec = totalSec2 - totalSec1;

        printf("%d - %d = %d \n", totalSec2, totalSec1, totalSec);


        valday = totalSec /(24*60*60);
        valhour = valday % 3600;
        valmin = totalSec % (3600 / 60);
        valsec = totalSec % (60);

        printf("A diferenca entre os dois tempos e de %u segundos = %hd d %d h %d m %d s",
        totalSec,
        valday,
        valhour,
        valmin,
        valsec
         );

    return 0;
}
