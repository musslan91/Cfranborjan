#include <stdio.h>
#include <stdlib.h>
#include "funktioner.h"

int main()
{

    system("chcp 1252");
    system("cls");

    printf("Vilket r�knes�tt vill du ha? 1 f�r addition, 2 f�r subtraktion, 3 f�r multiplikation, 4 f�r division.\n");
        int input;
    scanf("%d", &input);

    menu(input);


    return 0;
}
