#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Min variabel.*/
    int points;
    /*Skriver ut whats your point p� sk�rmen.*/
    printf("Write your point\n");
    /*Indata fr�n points variabeln som anv�ndaren vill peka p�.*/
    scanf("%d", &points);



    /*Om po�ngen �r �ver 44 har du A i betyg.*/
    if(points>44){// En bracket/m�svinge f�r att b�rja/dela upp mitt program.
    /*Skriver ut your grade is A p� sk�rmen.*/
    printf("Your grade is A\n");//\n betyder newline och l�gger n�stafunktion under denna.
    }// En bracket/m�svingar f�r att sluta en funktion i mitt program.

    /*Else if sats ifall inte den �vre st�mmer. Har du po�ng h�gre �n 40
    s� har du B i Betyg.*/
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
