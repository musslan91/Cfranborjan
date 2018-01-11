#include <stdio.h>
#include <stdlib.h>
/*3 st funktionsdeklarationer innan main programmet.
Dom är definerade i sina kroppar under main istället då
programmet nu vet vad de kommer att göra och vad den komma att kalla för funktioner.*/
double read_double(void);
int read_int(void);
double upphojt_till(double x, int n);//Får sina värden från x och n i de andra två funktionerna.

int main()
{
    /*Deklarerade variabler x=read_int() och n=read_double().*/
    int x=read_int();
    double n=read_double();

    printf("Resultat: %f", upphojt_till(n, x));

}

    int read_int(void){
    int nn;
    printf("n? ");
    scanf("%d", &nn);
    return nn;
    }

    double read_double(void){
    double xx;

    printf("x? ");
    scanf("%lf", &xx);
    return xx;

    }
  double upphojt_till(double x, int n){

    double resultat=1;
    int i=1;
    if(n>=0)
        for(; i<=n;i++)
            resultat=resultat*x;
        else
            for(; i<=-n;i++)
                resultat=resultat/x;

        return resultat;
    }


/*En funktionsanrop med variablerna int x och double n som definerar
funktionerna read_int(), read_double() går att definera dem i variabler likaså som
i övre lösning.



    printf("Resultat: %f", upphojt_till(read_double(),read_int()));

    return 0;
*/
