#include <stdio.h>
#include <stdlib.h>

int main()
{
    // L�mna [] tomt ifall du inte vet hur mkt plats som beh�vs reserveras. stefan[18] g�r att den skriver ut 323.
    int stefan []={21,13,345,45,5,6,4,5,76,8,323,6,4};

    /*
    stefan[0]=16;
    stefan[1]=21;
    */

    // Skriver ut v�rdet p� nr 3 allts� r�knar den fr�n (0,1,2,3,4,5) s� svaret blir d� 45
    printf("%d\n", stefan[3]);


    return 0;
}
