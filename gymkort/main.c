#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* Mina variabler.*/
    int arskort, biljett, slutpris, besok;
    /*Skriver ut vad kostar årskort på skärmen.*/
    printf("vad kostar årskort\n");
    /*Hämtar indata till årskort variabeln av användaren.*/
    scanf("%d", &arskort);
    /*Skriver ut vad kostar en biljett på skärmen.*/
    printf("Vad kostar en biljett?\n");
    /*Hämtar indata till biljett variabeln av användaren.*/
    scanf("%d", &biljett);
    /*Skriver ut hur ofta besöker du gymmet på skärmen.*/
    printf("Hur ofta besöker du gymmet?\n");
    /*Hämtar indata till besok variabeln av användaren.*/
    scanf("%d", &besok);
    /*definerar variabeln slutpris som ska vara besok gånger biljett.*/
    slutpris = besok * biljett;
    /*En if sats som testar ifall årskort är större än slutpriset*/
    if(slutpris>arskort){
        /*Isåfall printer man ut arskort blir billigare på skärmen.*/
        printf("arskort blir billigare\n");
    }
    /*Om biljett är större än årskort skriver man ut att biljett är billigare.*/
    else { // Else satser kommer alltid att ske ifall inget annat uppnås.
        printf("Biljett billigare");
    }
    return 0;


}
