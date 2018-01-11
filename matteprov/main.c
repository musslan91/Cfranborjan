#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Min variabel.*/
    int points;
    /*Skriver ut whats your point på skärmen.*/
    printf("Write your point\n");
    /*Indata från points variabeln som användaren vill peka på.*/
    scanf("%d", &points);



    /*Om poängen är över 44 har du A i betyg.*/
    if(points>44){// En bracket/måsvinge för att börja/dela upp mitt program.
    /*Skriver ut your grade is A på skärmen.*/
    printf("Your grade is A\n");//\n betyder newline och lägger nästafunktion under denna.
    }// En bracket/måsvingar för att sluta en funktion i mitt program.

    /*Else if sats ifall inte den övre stämmer. Har du poäng högre än 40
    så har du B i Betyg.*/
   else if(points>40){

    printf("Your grade is B\n");        /* Sedan exakt likadant
                                        i resten av programmet.*/

   }

    if(points>35){

    printf("Your grade is C\n");
    }


   else if(points>31){

    printf("Your grade is D\n");
   }
  else  if(points>26){

    printf("Your grade is E\n");
   }
    else if(points>21){

        printf("your grade is F\n");


    }

    return 0;




}
