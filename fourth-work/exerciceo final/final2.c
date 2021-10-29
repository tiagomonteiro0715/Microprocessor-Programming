#include <stdio.h>
#include <stdlib.h>
/*
deve apresentar no msm formato
programa lida com o maximo 1000 dias == 86 400 000 segundos
*/
/*componentes do programa:
input
use char*
*/
int main()
{
        int inputHour=0, inputMin=0, inputSec=0 ;
        int totalHour, totalMin;
        int totalOutputSec, totalInputSec;




        printf("Introduza o tempo no formato h(hora) m(minuto) s(segundo)");
        printf("\n");
        scanf(" %d %d %d", &inputHour, &inputMin, &inputSec);
        printf("\n");





        totalInputSec = inputSec + (60 * inputMin) + (3600 * inputHour);

        totalHour = totalInputSec%86400/3600;
        totalMin = totalInputSec%86400%3600/60;
        totalOutputSec = totalInputSec%86400%3600%60;

        printf("Leu %d h %d m %d s = %d", totalHour, totalMin, totalOutputSec, totalInputSec);

        return 0;
}
