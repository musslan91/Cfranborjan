#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *infil=fopen("test.txt", "w");//Man kan skriva saker i textfilen med och byta ut w till r s� l�ser han det. F�r hittar han filen s� kommer han l�sa den och inte skapa den.

    char s[100];

    while(fgets(s, 100, infil)!=NULL);

    printf("%s", s);

    return 0;
}
