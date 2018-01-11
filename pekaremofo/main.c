#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    pi och pekare *pi2 pekar på samma variabel.
    int k=15;
    int pi=&k;
    int *pi2=pi;

    printf("%d", pi);
*/

    int k = 15;//*pekare ger värdet av k som är 15, och &k ger mig adressen i minnet.

    int *pekare;

    pekare=&k;//Primär adressen till k där pekaren vill åt inte värdet. Som i detta fall är 15. Snarare 62270 i minnet.

    printf("%d", *pekare);// Här däremot vill jag ha utprintat värdet av k som är 15. Då måste man använde asteriks* före det man pekar på.


    return 0;

}
