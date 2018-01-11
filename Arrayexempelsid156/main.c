#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1252");
    system("cls");

   // L�s in f�ltstorleken och skapa f�ltet

   int n;
   printf("Hur m�nga typer av kontantkort?\n");
   scanf("%d", &n);

   double pris[n]; // F�letet f�r priser

   // L�s in priser

   for(int i=0; i<n; i++){
    printf("Pris/min f�r kort nr %d\n", i+1);
    scanf("%lf",&pris[i]);
   }
   // Ber�kna det l�gsta priset

    int billigast = 0; // Index f�r de billigast
    for(int i=1; i<n; i++){
        if (pris[i]<pris[billigast])
            billigast = i; // Nytt l�gsta billigast funnet
   }
   printf("\nKort nr %d �r billigast.\n", billigast+1);
   printf("Kostnad: %4.2f kr/minut\n", pris[billigast]);

}


