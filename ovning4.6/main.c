#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Min variabel som är en int/heltal.*/
    int x, summa;

    /*For-sats/loop med en initiering;villkor;förändring; x++ betyder x+1.*/
    for(x=-10;x<=10;x++){
    /*Sedan i loopen så ska summa variabeln gångras med två och sedan
    subtraheras med 5 gånger x och sedan plus ett i loopen och det körs
    varje varv.*/
    summa=(2*(x*x))-(5*x)+1;
    /*Sedan skriver man ut i strängen på skärmen %d med \t-Tab och \n-newline
    variablerna x och summa inuti loopen.*/
    printf("%d\t%d\n",x, summa);
    }


    return 0;
}
