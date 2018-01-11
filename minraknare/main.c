#include <stdio.h>
#include <stdlib.h>
#include "funktioner.h"

int main()
{

    double tal1, tal2;
    int val;
    printf("Välj räknesätt?\n");
    printf("Addition: 1 Subtraktion: 2 Multiplikation: 3 Division: 4\n");
    scanf("%d", &val);

    if(val==1)
    {

        printf("Ange tal 1\n");
        scanf("%lf", &tal1);

        printf("Ange tal 2\n");
        scanf("%lf", &tal2);

        addera(tal1, tal2);

    }


    else if(val==2)
    {

        printf("Ange tal 1\n");
        scanf("%lf", &tal1);

        printf("Ange tal 2\n");
        scanf("%lf", &tal2);

        subtraktion(tal1, tal2);

    }

    else if(val==3)
    {

        printf("Ange tal 1\n");
        scanf("%lf", &tal1);

        printf("Ange tal 2\n");
        scanf("%lf", &tal2);

        multiplikation(tal1, tal2);
    }
    else if(val==4)
    {
        printf("Ange tal 1\n");
        scanf("%lf", &tal1);

        printf("Ange tal 2\n");
        scanf("%lf", &tal2);

        division(tal1, tal2);
    }

    else

        printf("Fel inmatning försök igen\n");

    return 0;
}
