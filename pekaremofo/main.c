#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    pi och pekare *pi2 pekar p� samma variabel.
    int k=15;
    int pi=&k;
    int *pi2=pi;

    printf("%d", pi);
*/

    int k = 15;//*pekare ger v�rdet av k som �r 15, och &k ger mig adressen i minnet.

    int *pekare;

    pekare=&k;//Prim�r adressen till k d�r pekaren vill �t inte v�rdet. Som i detta fall �r 15. Snarare 62270 i minnet.

    printf("%d", *pekare);// H�r d�remot vill jag ha utprintat v�rdet av k som �r 15. D� m�ste man anv�nde asteriks* f�re det man pekar p�.


    return 0;

}
