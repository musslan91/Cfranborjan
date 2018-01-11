#include <stdio.h>
int main()

{
    /*Min variabel som heter nummer.*/
    int number;
    /*Skriver ut 2 på skärmen.*/
    printf("Skriv ett nummer\n");
    /*Skickar indata till 1 variabeln.*/
    scanf("%d" , &number);
    /*Skriver ut det nummer du skrev och visar det på skärmen.*/
    printf("You entered %d", number);

    return 0;
}
