#include <stdio.h>
#include <stdlib.h>


int ar_skottar(int ar){//ar_skottar namn p� min function.
    if((ar%4==0&&ar%100!=0)||ar%400==0)//if sats med flera villkor inuti.
    printf("Det ar skottar\n");

    else//Else sats ifall if satsen �ver inte �r sann.

        printf("det ar inte skottar");

return;//Denna return beh�ves egentligen inte.

}


int main()
{
    system("chcp 1252");//Svensk text ���.

    int artal;

    printf("Skriv ett �rtal f�r att se ifall det �r ett skott�r.\n");
    scanf("%d", &artal);

    ar_skottar(artal);//Skickar indata till variabeln artal sedan kallar han p� ar_skottar functionen.

    return 0;
}
