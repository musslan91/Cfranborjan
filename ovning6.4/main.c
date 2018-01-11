#include <stdio.h>
#include <stdlib.h>


    /*Om void var före stället för int hade den inte returnerat något alls. ingen "return" ska vara tomt.*/
    int read_int(void){//Funktionen tar inget. En void funktion är som ett kommando. Den ska bara göra en sak och inte returnera något.
    int nn;//Med denna funktion med void i parametrarna istället förvariabler kan man göra den parameterlös och då behöver du inte i main scanf variabeln då den finns definerad.
    printf("n? ");
    scanf("%d", &nn);

        return nn;//Returnera uträkning nn.

    double read_double(void){
    double xx;

    printf("x? ");
    scanf("%lf", &xx);

    return xx;//Returnera uträkning xx.

    }
  double upphojt_till(double x, int n){
    /*Denna function göra själva uträkningen i if  satser som är en double som heter upphojt_till.
    Som ska göra beräkningarna i read_int och read_double funktionerna.*/
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



    int x=read_int();//int x är svaret man får i read_int() functionen.
    double n=read_double();//Double n är svaret man får i read_double() functionen.
    /*Här kallar vi på funktionen upphojt_till som vill ha värdena på n och x efter kalkylering.*/
    printf("Resultat: %f", upphojt_till(n, x));//Kallar på resultatet av upphojt_till n och x/Read_int, Read_double.
    return 0;
}





/*En funktionsanrop med variablerna int x och double n som definerar
funktionerna read_int(), read_double() går att definera dem i variabler likaså som
i övre lösning.


/*Tex Void behöver ingen return. De kan då se ut såhär.
    scanf("%d", &nn);               void new_lines(int n){
                                    for(int i=1;i<=n;i++)
        return nn;                  printf("\n")
                                    Ingen return*/



 /*   printf("Resultat: %f", upphojt_till(read_double(),read_int()));

    return 0;*/

