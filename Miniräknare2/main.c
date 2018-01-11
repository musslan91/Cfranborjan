#include <stdio.h>
#include <stdlib.h>
#include "funktioner.h"

int main()
{

    system("chcp 1252");
    system("cls");

    printf("Vilket räknesätt vill du ha? 1 för addition, 2 för subtraktion, 3 för multiplikation, 4 för division.\n");
        int input;
    scanf("%d", &input);

    menu(input);


    return 0;
}
