/*Detta funktions bibliotek innehåller de fullständiga funktionerna och då ska den ha .c som filnamn.
Sedan kommer det en h-fil där som innehåller deklarationer på dessa funktioner.*/
#include <stdio.h>
#include "funktionsbibliotek.h"
int read_int(void){
    int nn;
    printf("n? ");
    scanf("%d", &nn);
    return nn;//Returnera uträkning nn.
}
double read_double(void){
    double xx;

    printf("x? ");
    scanf("%lf", &xx);

    return xx;//Returnera uträkning xx.
}

    void new_lines(int n){
    int i;
    for(i=1;i<=n;i++)
        printf("\n");
}

