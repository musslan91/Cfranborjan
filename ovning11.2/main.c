#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int main()
{

    float x=5.8;
    float *q1;
    float *q2;

    q1=&x;
    q2=NULL;

   /* Pekare q1 ger 5.80000 som svar.
    Skriva ut q2 krashar programmet*/
    printf("%f", *q1);

    return 0;

    /*Vad händer? Kompilatorn ger en varning. Programmet spårar ur eller skriver ut skräp.
Blir det någon skillnad om du istället för att låta q2 vara oinitierad initierar den så att den får värdet NULL? Nej!
Hade denna test fungerat om du inte initierat q2? Nej!*/

/*KOD SKANSHOLM: #include <stdio.h>

int main() {
float x = 5.8;
float *q1 = &x;
float *q2 = NULL;

printf("%f\n", *q1);
if (q2 != NULL)
  printf("%f\n", *q2);
}*/
}


