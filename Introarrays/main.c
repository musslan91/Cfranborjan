#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Lämna [] tomt ifall du inte vet hur mkt plats som behövs reserveras. stefan[18] gör att den skriver ut 323.
    int stefan []={21,13,345,45,5,6,4,5,76,8,323,6,4};

    /*
    stefan[0]=16;
    stefan[1]=21;
    */

    // Skriver ut värdet på nr 3 alltså räknar den från (0,1,2,3,4,5) så svaret blir då 45
    printf("%d\n", stefan[3]);


    return 0;
}
