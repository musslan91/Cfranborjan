#include <stdio.h>
#include <stdlib.h>
#include "funktionsbibliotek.h"
/*Val med if satser vilken utav alternativen rektangel, cirkel och triangel man vill m�ta.*/
int main()
{
    system("chcp 1252");
    system("cls");
    printf("V�lj alternativ: 1 area rektangel: 2 area cirkel: 3 area Triangel\n");
    int val;
    scanf("%d", &val);
    /*Om val �r 1 s� r�knar vi ut rektangelns area.*/
    if(val==1){
        double bredd, langd;
        printf("Rektangel:\n");
        printf("Skriv tal f�r bredd.\n");
        scanf("%lf", &bredd);
        printf("Skriv tal f�r l�ngd\n");
        scanf("%lf", &langd);
        printf("Arean �r: %f", area_rektangel(bredd, langd));

    }
    /*Annars om val �r 2 s� r�knar vi ut rektangelns area.*/
    else if(val==2){

        double radie;
        printf("Cirkel:\n");
        printf("Skriv radie s� r�knas PI som �r 3.14 med i utr�kningen.\n");
        scanf("%lf", &radie);

    printf("Arean �r: %f", area_cirkel(radie));

    }
    /*Annars om val �r 3 s� r�knar vi ut triangelns area.*/
    else if(val==3){

    double bas, hojd;
    printf("Triangel:\n");
    printf("Skriv in basen.\n");
    scanf("%lf", &bas);
    printf("Skriv in h�jden.\n");
    scanf("%lf", &hojd);

    printf("Arean �r: %f", area_triangel(bas, hojd));


    }
    else
        printf("Fel alternativ f�rs�k igen.\n");
    return 0;
}

