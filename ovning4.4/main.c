#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*I detta program �r en breaksats med. Det �nda den g�r och �r till f�r
    �r att bryta en loop s� den inte g�r o�ndligt. Om tex while(1) betyder alltid
    att det f�rsta varvet �r sant. Men utan break kan loopen h�lla p� i evighet.
    Man anv�nder �ven break f�r att anv�ndaren n�r som helst ska kunna avbryta loopen.*/
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

        /*Den printar ut studsar d� man pekat p� variabeln float med en decimal
        %.1f och sedan skriv ut studsar hur m�nga det blir. Man beh�ver aldrig ett &
        f�re variabeln i print. Bara i scanf.*/
        printf("Bollen stannar efter %.1f studsar\n", studsar);

    return 0;


}
