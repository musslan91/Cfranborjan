#include <stdio.h>
#include <stdlib.h>

    /*Mina variabler och funktionsnamnet kostnad. Variabelnamn två doubles, pris och moms.*/
    double kostnad(double pris, double moms){

    double resultat;
    printf("Vad kostar varan?\n");
    resultat=pris*((moms/100)+1);//Uträkning för att få ut momsen på varans pris.

    return resultat;//Returnerar resultat uträkningen.

    }

int main()
{
    system("chcp 1252");//Svensk text.
    /*Indata till moms och pris variablerna.*/
    double pris, moms;
    printf("Vad är priset?\n");
    scanf("%lf", &pris);
    printf("Vad är momsen i procent?\n");
    scanf("%lf", &moms);
    printf("%.2f", kostnad(pris, moms));

    return 0;
}
