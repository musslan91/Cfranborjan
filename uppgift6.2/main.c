#include <stdio.h>
#include <stdlib.h>

    /*Mina variabler och funktionsnamnet kostnad. Variabelnamn tv� doubles, pris och moms.*/
    double kostnad(double pris, double moms){

    double resultat;
    printf("Vad kostar varan?\n");
    resultat=pris*((moms/100)+1);//Utr�kning f�r att f� ut momsen p� varans pris.

    return resultat;//Returnerar resultat utr�kningen.

    }

int main()
{
    system("chcp 1252");//Svensk text.
    /*Indata till moms och pris variablerna.*/
    double pris, moms;
    printf("Vad �r priset?\n");
    scanf("%lf", &pris);
    printf("Vad �r momsen i procent?\n");
    scanf("%lf", &moms);
    printf("%.2f", kostnad(pris, moms));

    return 0;
}
