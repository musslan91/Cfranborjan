/*Detta funktions bibliotek inneh�ller de fullst�ndiga funktionerna och d� ska den ha .c som filnamn.
Sedan kommer det en h-fil d�r som inneh�ller deklarationer p� dessa funktioner.*/
#include <stdio.h>
#include "funktionsbibliotek.h"
int read_int(void){
    int nn;
    printf("n? ");
    scanf("%d", &nn);
    return nn;//Returnera utr�kning nn.
}
double read_double(void){
    double xx;

    printf("x? ");
    scanf("%lf", &xx);

    return xx;//Returnera utr�kning xx.
}

    void new_lines(int n){
    int i;
    for(i=1;i<=n;i++)
        printf("\n");
}

