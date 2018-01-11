#include <stdio.h>
#include <stdlib.h>

int main()
{
    double euro[]={0,0,0,0};
    int valor[]={5,10,20,50,100,200,500};
    /*sizeof euro ger hela fältets längd i byte, en double har +-2miljoner bytes, delat på sizeof euro[0]
    ger storleken för ett element, så ger hela uttrycket antalet element.
    Detta används för att att se hur mycket utrymme man kan få plats i en double och hur sedan
    dela på storleken av våra element.Eftersom size of a ger hela fältets längd, uttryckt i antal bytes, och size of[0]
    ger storleken för ett element
    så ger hela uttrycket ovan antalet element. Men här kommer en varning: operatorn sizeof fungerar inte inne i en
    funktion om fältet är en parameter till funktionen*/
    for(int i=0;i<sizeof euro/sizeof euro[0];i++)
        printf("%5lf", euro[i]);
        printf("\n");

/*Men skriver sizeof valor/sizeof [0] för att den ska kunna kontrollera hur stor plats de finns att använda sig av
   ex: om du har 10,000 rader kod så kan detta vara svårt att hålla reda på. Därför gör man så detta sker mer automatisk.*/

        for(int i=0;i<sizeof valor/sizeof valor[0];i++)
        printf("%5d", valor[i]);
    return 0;
}
