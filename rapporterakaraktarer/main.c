#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char mening[100];
    char bokstav;

    printf("Skriv in en mening:\n");
    scanf("%s", mening);

    printf("Skriv in bokstav som du vill hitta i din mening och hur m�nga dom �r\n");
    scanf("%c", &bokstav);


    int antal=0;
    for(int i=0;i<strlen(mening);i++){

        if(mening[i]==bokstav){

            antal++;

        }

        printf("%d", antal);
    }
    return 0;
}
