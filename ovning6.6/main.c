#include <stdio.h>
#include <stdlib.h>


int ar_skottar(int ar){//ar_skottar namn på min function.
    if((ar%4==0&&ar%100!=0)||ar%400==0)//if sats med flera villkor inuti.
    printf("Det ar skottar\n");

    else//Else sats ifall if satsen över inte är sann.

        printf("det ar inte skottar");

return;//Denna return behöves egentligen inte.

}


int main()
{
    system("chcp 1252");//Svensk text åäö.

    int artal;

    printf("Skriv ett årtal för att se ifall det är ett skottår.\n");
    scanf("%d", &artal);

    ar_skottar(artal);//Skickar indata till variabeln artal sedan kallar han på ar_skottar functionen.

    return 0;
}
