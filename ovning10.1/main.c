#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    double personnummer;
    char namn[100];
    FILE *infil=fopen("personnummer.txt", "w");//F�r att g�ra filen och "a" append f�r att skriva till extra i filen.
    while(fgets(namn, 100, infil) != NULL)
        fputs(namn, personnummer);


    printf("%s", namn);

    return 0;
}
