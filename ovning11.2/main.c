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

    /*Vad h�nder? Kompilatorn ger en varning. Programmet sp�rar ur eller skriver ut skr�p.
Blir det n�gon skillnad om du ist�llet f�r att l�ta q2 vara oinitierad initierar den s� att den f�r v�rdet NULL? Nej!
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


