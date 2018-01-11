#include <stdio.h>
#include <stdlib.h>

/*Det finns tre livsl�ngder p� variabler. Statisk livsl�ngd, automatisk livsl�ngd och allokerad livsl�ngd.
Statiska och externa variabler har ett tilldelat minnesutrymme som finns kvar under hela programmets exekvering.
Automatisk livsl�ngd inneb�r att minnesutryummet reserveras f�r variablerna n�r exekvering i blocket avslutas. N�r ett
funktionsanrop �r avslutat finns allts� inte lokala variabler och parametrar l�ngre. Dessutom �r de inte synliga
utanf�r de block d�r de �r deklarerats. */
   int a = 0;

   void f(){

   int b = 0;

   static int c;
   c=0;

   printf("a=%d b=%d c=%d\n", ++a,++b,++c);
   }

int main()
{
f();
++a;
f();
}


/*
Utskriften blir
a=1 b=1 c=1
a=3 b=1 c=1
Detta beror p� att variablen c i funktionen f nu kommer att
tilldelas v�rdet 0 varje g�ng f anropas.
N�r det var en initiering skedde initieringen bara en enda g�ng,
innan f anropades f�rsta g�ngen.
*/
