#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Två stycken double integer som är större än int
    Definerar variabeln PI till 3.14 med sedan 3 variabler double
    area, volym och radie.*/
    double PI = 3.14;
    double area, volym, radie;
    /*Skiver ut radie på skärmen och efter scanf pekar man på adressen till variabeln
    %f för double/float &radie. Vad är din radie?*/
    printf("Skriv radie\n");
    scanf("%lf", &radie);
    /*Definerar area och volym i deras ekvation.*/
    area=4*PI*(radie*radie);
    volym=(4*PI*(radie*radie*radie)/3);

    /*Skriver ut på skärmen %0.1f Arean, volymen och radien.*/
    printf("Arean ar: %0.1f\nVolymen ar: %0.1f\nRadien ar: %0.f\n", area, volym, radie);


    return 0;
}
