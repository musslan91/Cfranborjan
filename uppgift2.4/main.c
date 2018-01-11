#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*4 intergers/heltal variabler.*/
    int x1,x2,y1,y2;
    double s;
    /*Skriv in koordinaterna och skriv ut på skärmen koordinaterna. med fyra %d och peka
    scanf till variabeladresserna fyra st &.*/
    printf("Skriv koordinater:\n");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    /*Ekvationen till koordinaterna.*/
    s=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    /*Printa ur till skärmen avståndet mellan punkterna %f för double integern s;*/
    printf("Avstånd mellan punkterna ar:\n%f",s);
    return 0;
}
