#include <stdio.h>
#include <stdlib.h>
#include "funktionsbibliotek.h"
/*Val med if satser vilken utav alternativen rektangel, cirkel och triangel man vill mäta.*/
int main()
{
    system("chcp 1252");
    system("cls");
    printf("Välj alternativ: 1 area rektangel: 2 area cirkel: 3 area Triangel\n");
    int val;
    scanf("%d", &val);
    /*Om val är 1 så räknar vi ut rektangelns area.*/
    if(val==1){
        double bredd, langd;
        printf("Rektangel:\n");
        printf("Skriv tal för bredd.\n");
        scanf("%lf", &bredd);
        printf("Skriv tal för längd\n");
        scanf("%lf", &langd);
        printf("Arean är: %f", area_rektangel(bredd, langd));

    }
    /*Annars om val är 2 så räknar vi ut rektangelns area.*/
    else if(val==2){

        double radie;
        printf("Cirkel:\n");
        printf("Skriv radie så räknas PI som är 3.14 med i uträkningen.\n");
        scanf("%lf", &radie);

    printf("Arean är: %f", area_cirkel(radie));

    }
    /*Annars om val är 3 så räknar vi ut triangelns area.*/
    else if(val==3){

    double bas, hojd;
    printf("Triangel:\n");
    printf("Skriv in basen.\n");
    scanf("%lf", &bas);
    printf("Skriv in höjden.\n");
    scanf("%lf", &hojd);

    printf("Arean är: %f", area_triangel(bas, hojd));


    }
    else
        printf("Fel alternativ försök igen.\n");
    return 0;
}

