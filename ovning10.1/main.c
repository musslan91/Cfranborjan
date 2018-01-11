#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    double personnummer;
    char namn[100];
    FILE *infil=fopen("personnummer.txt", "w");//För att göra filen och "a" append för att skriva till extra i filen.
    while(fgets(namn, 100, infil) != NULL)
        fputs(namn, personnummer);


    printf("%s", namn);

    return 0;
}
