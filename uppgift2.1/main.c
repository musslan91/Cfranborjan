#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Tv� stycken double integer som �r st�rre �n int
    Definerar variabeln PI till 3.14 med sedan 3 variabler double
    area, volym och radie.*/
    double PI = 3.14;
    double area, volym, radie;
    /*Skiver ut radie p� sk�rmen och efter scanf pekar man p� adressen till variabeln
    %f f�r double/float &radie. Vad �r din radie?*/
    printf("Skriv radie\n");
    scanf("%lf", &radie);
    /*Definerar area och volym i deras ekvation.*/
    area=4*PI*(radie*radie);
    volym=(4*PI*(radie*radie*radie)/3);

    /*Skriver ut p� sk�rmen %0.1f Arean, volymen och radien.*/
    printf("Arean ar: %0.1f\nVolymen ar: %0.1f\nRadien ar: %0.f\n", area, volym, radie);


    return 0;
}
