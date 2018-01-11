#include <stdio.h>
#include <stdlib.h>

int main()
{

    int alder, pris;
    printf("Hur gammal är du?\n");

    scanf("%d", &pris);
    if(alder<=12)
        pris = 3145;
    else
        pris = 4295;
    printf("Pris: %d kr", pris);

    return 0;
}
