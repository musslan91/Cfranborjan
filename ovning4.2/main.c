#include <stdio.h>
#include <stdlib.h>

int main()//Semicolon efter varje rad där man vill stoppa en funktion.
{
    /*Float som är flyttal/reeltal kan hantera decimaler. Vilket inte
    integer/heltal kan göra.*/
    float n, k, summa = 0;// Mina variabler n, k och summa.
    /*Skriver ut "skriv tal till skärmen med en \n newline så de blir snyggt.*/
    printf("Skriv tal\n");
    /*Skickar indata från användaren till variabeln n. Man måste använda %f
    för float och sedan & för att peka på den variabeln man vill skicka indata
    till. I detta fall n.*/
    scanf("%f", &n);
    /*Inititierar/definerar k är lika med 1.*/
    k =1;
    /*While loop funktion där man definerar k är mindre eller lika med variabeln n.*/
    while( k <= n){//Börjar ett program.
        /*Definierar summa variabeln med sig själv plus inom parantes (1/k).*/
        summa = summa + (1 / k);
        /*Definerar k med sig själv och plussar på 1.*/
        k = k + 1;
    }//Avslutar ett program.

        /*Skriver ut "slutgiltiga tal" med variabeln summa som är
        en float och inte integer elelr double variabel, därför appostrof
        "%f\n" newline, summa.*/
        printf("slutgiltigt tal %f\n", summa);



        return 0;

}
