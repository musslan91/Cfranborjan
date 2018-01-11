#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char namn[20];
    char efternamn[20];

    printf("Vad heter du?\n");
    scanf("%s", namn);

    printf("Vad är ditt efternamn\n");
    scanf("%s", efternamn);

    strcat(namn,efternamn);

    printf("Hej %s",namn);

    return 0;
}
