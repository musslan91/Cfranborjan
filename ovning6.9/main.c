#include <stdio.h>
#include <stdlib.h>
/*3 st funktionsdeklarationer innan main programmet.
Dom �r definerade i sina kroppar under main ist�llet d�
programmet nu vet vad de kommer att g�ra och vad den komma att kalla f�r funktioner.*/
double read_double(void);
int read_int(void);
double upphojt_till(double x, int n);//F�r sina v�rden fr�n x och n i de andra tv� funktionerna.

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
funktionerna read_int(), read_double() g�r att definera dem i variabler likas� som
i �vre l�sning.



    printf("Resultat: %f", upphojt_till(read_double(),read_int()));

    return 0;
*/
