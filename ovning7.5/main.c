#include <stdio.h>
#include <stdlib.h>

/*Det finns tre livslängder på variabler. Statisk livslängd, automatisk livslängd och allokerad livslängd.
Statiska och externa variabler har ett tilldelat minnesutrymme som finns kvar under hela programmets exekvering.
Automatisk livslängd innebär att minnesutryummet reserveras för variablerna när exekvering i blocket avslutas. När ett
funktionsanrop är avslutat finns alltså inte lokala variabler och parametrar längre. Dessutom är de inte synliga
utanför de block där de är deklarerats. */
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
Detta beror på att variablen c i funktionen f nu kommer att
tilldelas värdet 0 varje gång f anropas.
När det var en initiering skedde initieringen bara en enda gång,
innan f anropades första gången.
*/
