#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* Mina variabler.*/
    int arskort, biljett, slutpris, besok;
    /*Skriver ut vad kostar �rskort p� sk�rmen.*/
    printf("vad kostar �rskort\n");
    /*H�mtar indata till �rskort variabeln av anv�ndaren.*/
    scanf("%d", &arskort);
    /*Skriver ut vad kostar en biljett p� sk�rmen.*/
    printf("Vad kostar en biljett?\n");
    /*H�mtar indata till biljett variabeln av anv�ndaren.*/
    scanf("%d", &biljett);
    /*Skriver ut hur ofta bes�ker du gymmet p� sk�rmen.*/
    printf("Hur ofta bes�ker du gymmet?\n");
    /*H�mtar indata till besok variabeln av anv�ndaren.*/
    scanf("%d", &besok);
    /*definerar variabeln slutpris som ska vara besok g�nger biljett.*/
    slutpris = besok * biljett;
    /*En if sats som testar ifall �rskort �r st�rre �n slutpriset*/
    if(slutpris>arskort){
        /*Is�fall printer man ut arskort blir billigare p� sk�rmen.*/
        printf("arskort blir billigare\n");
    }
    /*Om biljett �r st�rre �n �rskort skriver man ut att biljett �r billigare.*/
    else { // Else satser kommer alltid att ske ifall inget annat uppn�s.
        printf("Biljett billigare");
    }
    return 0;


}
