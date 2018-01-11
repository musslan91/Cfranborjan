#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Mina vaiabler integers/heltal n, i, j;*/
   int n, i, j;

    /*Skriver ut i strängen på skärmen Antal rader.
    och scanf till adressen till variabeln n.*/
   printf("Antal rader?\n");
   scanf("%d", &n);

    /*For satser/loopar där initiering;villkor;förändring för den yttre och den inre
    loopen. Det är på rader och kolunmner plustecknena ska komma ut på.*/
   for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){

        /*Printar ut hur många plustecken som skrivs ut på rader och kolumner.*/
            printf("+");
        }

        printf("\n");
   }




   return 0;
}
