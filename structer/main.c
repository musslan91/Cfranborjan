#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct elev
    {
    char fornamn[30];
    char efternamn[30];
    };

void printNameValue(struct elev elev1)
{
    printf("Elev %s %s", elev1.fornamn,elev1.efternamn);
}

int main()
{
    struct elev personer[2];

    strcpy(personer[0].fornamn,"Petter");
    strcpy(personer[0].efternamn,"Niklas");

    strcpy(personer[1].fornamn,"Kalle");
    strcpy(personer[1].efternamn,"Anka");

    printNameValue(personer[0]);
    printf("\n");
    printNameValue(personer[1]);

    return 0;
}
