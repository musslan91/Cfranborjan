#include <stdio.h>
int main()

{
    /*Min variabel som heter nummer.*/
    int number;
    /*Skriver ut 2 p� sk�rmen.*/
    printf("Skriv ett nummer\n");
    /*Skickar indata till 1 variabeln.*/
    scanf("%d" , &number);
    /*Skriver ut det nummer du skrev och visar det p� sk�rmen.*/
    printf("You entered %d", number);

    return 0;
}
