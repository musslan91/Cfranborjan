#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*I detta program är en breaksats med. Det ända den gör och är till för
    är att bryta en loop så den inte går oändligt. Om tex while(1) betyder alltid
    att det första varvet är sant. Men utan break kan loopen hålla på i evighet.
    Man använder även break för att användaren när som helst ska kunna avbryta loopen.*/
    float meter, stilla = 1, studsar;

    printf("Vilken hojd i meter vill du slappa bollen?\n");
    scanf("%f", &meter);

    meter = meter * 100;

    while(meter >= stilla ){

            studsar=studsar+1;
            meter = meter * 0.7;

            if(stilla <= 0){

                   break;
            }

    }

        /*Den printar ut studsar då man pekat på variabeln float med en decimal
        %.1f och sedan skriv ut studsar hur många det blir. Man behöver aldrig ett &
        före variabeln i print. Bara i scanf.*/
        printf("Bollen stannar efter %.1f studsar\n", studsar);

    return 0;


}
