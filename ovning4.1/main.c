#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Mina variabler n, k och summa(som �r lika med 0).*/
    int n, k = 1 , summa=0, j = 1;
    /*Skriver ut "skriv tal" p� sk�rmen med en newline \n.*/
    printf("skriv tal\n");
    /*Skickar indata till min variabel n i scanf funktionen.*/
    scanf("%d" , &n);
    /*Startar en while funktion / en loop. d�r n variabeln �r
    st�rre eller lika med j.*/
    while(j <= n){//Startar nytt program med bracket/m�sving.*/
        /*Variabeln summa definerar jag h�r som summa �r lika med
        lagring i samma variabel som summa + j.*/
        summa = summa + j;
        /*k variabeln definerar jag likadant fast l�gger till +2.
        och j sedan l�gger jag till och lagrar likadant fast i j variabeln.
        j �r lika med j och l�gger till +2.*/
        k = k + 2;
        j = j + k;
        }
        /*Sedan efter funktionen/programmet skriver jag ut Summan �r och anv�nder mig utav
        summa variabeln med pekaren %d p� den integern/heltalet och den skriver ut
        det jag scannat in d�r. Eller snarare det jag skriver p� sk�rmen.*/
        printf("Summan ar %d\n", summa);






    return 0;






}
