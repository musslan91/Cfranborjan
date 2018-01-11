#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *infil=fopen("test.txt", "w");//Man kan skriva saker i textfilen med och byta ut w till r så läser han det. För hittar han filen så kommer han läsa den och inte skapa den.

    char s[100];

    while(fgets(s, 100, infil)!=NULL);

    printf("%s", s);

    return 0;
}
