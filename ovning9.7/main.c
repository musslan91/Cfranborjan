#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char namn0[30];
    char namn1[30];

    printf("Vad heter du?\n");
    scanf("%s", namn0);

    printf("Vad heter du: \n");
    scanf("%s", namn1);

    int resultat=strcmp(namn0, namn1);

    if(resultat<0){
        printf("%s kommer först\n", namn0);
    }
    else if(resultat>0){
        printf("%s kommer först\n", namn1);
    }
        else printf("Namnen är lika\n");
    printf("Hej %s",namn1);

    return 0;
}
