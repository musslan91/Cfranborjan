#include <stdio.h>
#include <stdlib.h>
#include "funktioner.h"
void menu(int input)
{
    switch(input){

case 1:
    addition();
    break;
case 2:
    subtraktion();
    break;
case 3:
    multiplikation();
    break;
case 4:
    division();
    break;

default:
    printf("Fel alternativ!\n");
}

}
void addition()
{

    double tal1, tal2;
    printf("Ange tal 1");
    scanf("%lf", &tal1);

    printf("Ange tal 2\n");
    scanf("%lf", &tal2);

    printf("%lf", tal1 + tal2);
}
void subtraktion()
{

    double tal1, tal2;
    printf("Ange tal 1\n");
    scanf("%lf", &tal1);

    printf("Ange tal 2\n");
    scanf("%lf", &tal2);

    printf("%lf", tal1 - tal2);
}

void multiplikation()
{

    double tal1, tal2;
    printf("Ange tal 1\n");
    scanf("%lf", &tal1);

    printf("Ange tal 2\n");
    scanf("%lf", &tal2);

    printf("%lf", tal1 * tal2);
}

void division()
{

    double tal1, tal2;
    printf("Ange tal 1\n");
    scanf("%lf", &tal1);

    printf("Ange tal 2\n");
    scanf("%lf", &tal2);

    printf("%lf", tal1 / tal2);
}

