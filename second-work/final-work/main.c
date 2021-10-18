#include <stdio.h>
#include <stdlib.h>
/*
deve apresentar no msm formato
programa lida com o maximo 1000 dias == 86400000 segundos
*/
/*
depois de estar feito - tratar melhor das variaveis + melhor nome de variaveis
*/
int main()
{

        int valday1=0, valhour1=0, valmin1=0, valsec1=0 ;
        int valday2=0, valhour2=0, valmin2=0, valsec2=0 ;
        int valday=0, valhour=0, valmin=0, valsec=0 ;


        printf("Introduza o tempo no.1 (dia)d (hora)h (minuto)m (segundo)s ");
        printf("\n");
        scanf(" %d %d %d %d", &valday1, &valhour1, &valmin1, &valsec1);
        printf("\n");
        printf(" %d d %d h %d m %d s ", valday1, valhour1, valmin1, valsec1);
        printf("\n");
        printf("Introduza o tempo no.1 (dia)d (hora)h (minuto)m (segundo)s \n");
        scanf(" %d %d %d %d", &valday2, &valhour2, &valmin2, &valsec2);

        int totalSec1 = valsec1 + (60 * valmin1) + (3600 * valhour1) + (86400 * valday1);
        int totalSec2 = valsec2 + (60 * valmin2) + (3600 * valhour2) + (86400 * valday2);
        int totalSec = totalSec2 - totalSec1;

        printf("%d - %d = %d", totalSec2, totalSec1, totalSec);

        //find days
        valday = (float) totalSec / 86400;
        int daysRounded = (int) valday;
        float partday = valday - daysRounded;

        //find hours
        valhour = (float) partday * 24;
        int hoursRounded = (int) valhour;
        float parthour = valhour - hoursRounded;

        //find minutes
        valmin = (float) parthour * 60;
        int minRounded = (int) valmin;
        float partmin = valmin - minRounded;

        //find seconds
        valsec = (float) partmin * 60;
        valsec = (int) valsec;

        printf("A diferença entre os dois tempos é de %d segundos = %d d %d h %d m %d s",
        totalSec,
        valday,
        valhour,
        valmin,
        valsec
         );

    return 0;
}
