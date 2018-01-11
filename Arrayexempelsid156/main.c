#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1252");
    system("cls");

   // Läs in fältstorleken och skapa fältet

   int n;
   printf("Hur många typer av kontantkort?\n");
   scanf("%d", &n);

   double pris[n]; // Fäletet för priser

   // Läs in priser

   for(int i=0; i<n; i++){
    printf("Pris/min för kort nr %d\n", i+1);
    scanf("%lf",&pris[i]);
   }
   // Beräkna det lägsta priset

    int billigast = 0; // Index för de billigast
    for(int i=1; i<n; i++){
        if (pris[i]<pris[billigast])
            billigast = i; // Nytt lägsta billigast funnet
   }
   printf("\nKort nr %d är billigast.\n", billigast+1);
   printf("Kostnad: %4.2f kr/minut\n", pris[billigast]);

}


