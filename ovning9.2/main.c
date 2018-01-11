#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    int text;
    int antaltecken;

    for(int i=0;text=(text=getchar())!= EOF;i++){ //Getchar läser in enstaka tecken från tangentbord, Det är en standardfunktion.
        antaltecken=i;
        }

    printf("%d", antaltecken);


    return 0;
}
