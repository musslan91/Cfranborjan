#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Min variabel som �r en int/heltal.*/
    int x, summa;

    /*For-sats/loop med en initiering;villkor;f�r�ndring; x++ betyder x+1.*/
    for(x=-10;x<=10;x++){
    /*Sedan i loopen s� ska summa variabeln g�ngras med tv� och sedan
    subtraheras med 5 g�nger x och sedan plus ett i loopen och det k�rs
    varje varv.*/
    summa=(2*(x*x))-(5*x)+1;
    /*Sedan skriver man ut i str�ngen p� sk�rmen %d med \t-Tab och \n-newline
    variablerna x och summa inuti loopen.*/
    printf("%d\t%d\n",x, summa);
    }


    return 0;
}
