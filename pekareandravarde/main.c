#include <stdio.h>
#include <stdlib.h>

int main()
{

    int k = 15, *pekare = 20;
    pekare = &k;

    printf("%d", *pekare);

    return 0;
}
