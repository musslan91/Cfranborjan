#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Mina vaiabler integers/heltal n, i, j;*/
   int n, i, j;

    /*Skriver ut i str�ngen p� sk�rmen Antal rader.
    och scanf till adressen till variabeln n.*/
   printf("Antal rader?\n");
   scanf("%d", &n);

    /*For satser/loopar d�r initiering;villkor;f�r�ndring f�r den yttre och den inre
    loopen. Det �r p� rader och kolunmner plustecknena ska komma ut p�.*/
   for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){

        /*Printar ut hur m�nga plustecken som skrivs ut p� rader och kolumner.*/
            printf("+");
        }

        printf("\n");
   }




   return 0;
}
