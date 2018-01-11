#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Mina variabler n, k och summa(som är lika med 0).*/
    int n, k = 1 , summa=0, j = 1;
    /*Skriver ut "skriv tal" på skärmen med en newline \n.*/
    printf("skriv tal\n");
    /*Skickar indata till min variabel n i scanf funktionen.*/
    scanf("%d" , &n);
    /*Startar en while funktion / en loop. där n variabeln är
    större eller lika med j.*/
    while(j <= n){//Startar nytt program med bracket/måsving.*/
        /*Variabeln summa definerar jag här som summa är lika med
        lagring i samma variabel som summa + j.*/
        summa = summa + j;
        /*k variabeln definerar jag likadant fast lägger till +2.
        och j sedan lägger jag till och lagrar likadant fast i j variabeln.
        j är lika med j och lägger till +2.*/
        k = k + 2;
        j = j + k;
        }
        /*Sedan efter funktionen/programmet skriver jag ut Summan är och använder mig utav
        summa variabeln med pekaren %d på den integern/heltalet och den skriver ut
        det jag scannat in där. Eller snarare det jag skriver på skärmen.*/
        printf("Summan ar %d\n", summa);






    return 0;






}
