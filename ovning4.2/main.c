#include <stdio.h>
#include <stdlib.h>

int main()//Semicolon efter varje rad d�r man vill stoppa en funktion.
{
    /*Float som �r flyttal/reeltal kan hantera decimaler. Vilket inte
    integer/heltal kan g�ra.*/
    float n, k, summa = 0;// Mina variabler n, k och summa.
    /*Skriver ut "skriv tal till sk�rmen med en \n newline s� de blir snyggt.*/
    printf("Skriv tal\n");
    /*Skickar indata fr�n anv�ndaren till variabeln n. Man m�ste anv�nda %f
    f�r float och sedan & f�r att peka p� den variabeln man vill skicka indata
    till. I detta fall n.*/
    scanf("%f", &n);
    /*Inititierar/definerar k �r lika med 1.*/
    k =1;
    /*While loop funktion d�r man definerar k �r mindre eller lika med variabeln n.*/
    while( k <= n){//B�rjar ett program.
        /*Definierar summa variabeln med sig sj�lv plus inom parantes (1/k).*/
        summa = summa + (1 / k);
        /*Definerar k med sig sj�lv och plussar p� 1.*/
        k = k + 1;
    }//Avslutar ett program.

        /*Skriver ut "slutgiltiga tal" med variabeln summa som �r
        en float och inte integer elelr double variabel, d�rf�r appostrof
        "%f\n" newline, summa.*/
        printf("slutgiltigt tal %f\n", summa);



        return 0;

}
