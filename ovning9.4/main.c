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

    if(isdigit(tecken))//Kollar ifall det �r en siffra man knappar in.
        printf("Det �r en siffra\n");

    if(islower(tecken)){//Kollar om det �r en liten bokstav.
        printf("Det �r en liten bokstav\n");
    }
    if(isupper(tecken)){//Kollar ifall det �r en stor bokstav.
        printf("Det �r en stor bokstav\n");
    }
    if(islower(tecken)){//Kollar ifall det �r en liten bokstav
        printf("Det �r en liten bokstav\n");
        printf("Motsvarande stora bokstav �r: %c\n", toupper(tecken));//G�r om liten bokstav till stor bokstav.
    }


    return 0;
}
