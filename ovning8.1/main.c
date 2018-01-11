#include <stdio.h>
#include <stdlib.h>

int main()
{
    double euro[]={0,0,0,0};
    int valor[]={5,10,20,50,100,200,500};
    /*sizeof euro ger hela f�ltets l�ngd i byte, en double har +-2miljoner bytes, delat p� sizeof euro[0]
    ger storleken f�r ett element, s� ger hela uttrycket antalet element.
    Detta anv�nds f�r att att se hur mycket utrymme man kan f� plats i en double och hur sedan
    dela p� storleken av v�ra element.Eftersom size of a ger hela f�ltets l�ngd, uttryckt i antal bytes, och size of[0]
    ger storleken f�r ett element
    s� ger hela uttrycket ovan antalet element. Men h�r kommer en varning: operatorn sizeof fungerar inte inne i en
    funktion om f�ltet �r en parameter till funktionen*/
    for(int i=0;i<sizeof euro/sizeof euro[0];i++)
        printf("%5lf", euro[i]);
        printf("\n");

/*Men skriver sizeof valor/sizeof [0] f�r att den ska kunna kontrollera hur stor plats de finns att anv�nda sig av
   ex: om du har 10,000 rader kod s� kan detta vara sv�rt att h�lla reda p�. D�rf�r g�r man s� detta sker mer automatisk.*/

        for(int i=0;i<sizeof valor/sizeof valor[0];i++)
        printf("%5d", valor[i]);
    return 0;
}
