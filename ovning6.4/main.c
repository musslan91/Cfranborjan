#include <stdio.h>
#include <stdlib.h>


    /*Om void var f�re st�llet f�r int hade den inte returnerat n�got alls. ingen "return" ska vara tomt.*/
    int read_int(void){//Funktionen tar inget. En void funktion �r som ett kommando. Den ska bara g�ra en sak och inte returnera n�got.
    int nn;//Med denna funktion med void i parametrarna ist�llet f�rvariabler kan man g�ra den parameterl�s och d� beh�ver du inte i main scanf variabeln d� den finns definerad.
    printf("n? ");
    scanf("%d", &nn);

        return nn;//Returnera utr�kning nn.

    double read_double(void){
    double xx;

    printf("x? ");
    scanf("%lf", &xx);

    return xx;//Returnera utr�kning xx.

    }
  double upphojt_till(double x, int n){
    /*Denna function g�ra sj�lva utr�kningen i if  satser som �r en double som heter upphojt_till.
    Som ska g�ra ber�kningarna i read_int och read_double funktionerna.*/
    double resultat=1;
    int i=1;
    if(n>=0)
        for(; i<=n;i++)
            resultat=resultat*x;
        else
            for(; i<=-n;i++)
                resultat=resultat/x;

        return resultat;
    }

int main()
{



    int x=read_int();//int x �r svaret man f�r i read_int() functionen.
    double n=read_double();//Double n �r svaret man f�r i read_double() functionen.
    /*H�r kallar vi p� funktionen upphojt_till som vill ha v�rdena p� n och x efter kalkylering.*/
    printf("Resultat: %f", upphojt_till(n, x));//Kallar p� resultatet av upphojt_till n och x/Read_int, Read_double.
    return 0;
}





/*En funktionsanrop med variablerna int x och double n som definerar
funktionerna read_int(), read_double() g�r att definera dem i variabler likas� som
i �vre l�sning.


/*Tex Void beh�ver ingen return. De kan d� se ut s�h�r.
    scanf("%d", &nn);               void new_lines(int n){
                                    for(int i=1;i<=n;i++)
        return nn;                  printf("\n")
                                    Ingen return*/



 /*   printf("Resultat: %f", upphojt_till(read_double(),read_int()));

    return 0;*/

