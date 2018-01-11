#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "swedish");//Standard bibliotek med fler tecken.

    char tecken;

    printf("Skriv vad du vill\n");
    scanf("%c", &tecken);//Scannar in variabeln tecken och skickar adress indata till den.

    if(isdigit(tecken))//Kollar ifall det är en siffra man knappar in.
        printf("Det är en siffra\n");

    if(islower(tecken)){//Kollar om det är en liten bokstav.
        printf("Det är en liten bokstav\n");
    }
    if(isupper(tecken)){//Kollar ifall det är en stor bokstav.
        printf("Det är en stor bokstav\n");
    }
    if(islower(tecken)){//Kollar ifall det är en liten bokstav
        printf("Det är en liten bokstav\n");
        printf("Motsvarande stora bokstav är: %c\n", toupper(tecken));//Gör om liten bokstav till stor bokstav.
    }


    return 0;
}
