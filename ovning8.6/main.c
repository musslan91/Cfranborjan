#include <stdio.h>
#include <stdlib.h>
#define N 10

    double medelv(double a[], int n) {
    double sum = 0;
    for (int i=0; i<n; i++)
    sum += a[i];//sum=sum + a[i], är samma sak.
    return sum / n;
}
int main()
{
    system("chcp 1252");
    system("cls");
    double pris[N];
   // Läs in fältstorleken och skapa fältet
   int n=0;

   while(n<N){
    printf("Pris/min för kort nr %d\n", n+1);
   if(scanf("%lf", &pris[n]) !=1)
    break;
   n++; //Öka antalet typer av kort med 1.
}
    //Beräkna det minsta priset.
    int billigast=0;            //Index för billigaste.
    for(int i=1;i<n;i++){
        if(pris[i]<pris[billigast])
            billigast=i;//nytt lägsta pris funnrt.

    }
    printf("\nKort nr %d är billigast. \n", billigast+1);
    printf("Kostnad: %4.2f kr/minut", pris[billigast]);
    printf("\nMedelvärde för priser: %1.2f\n", medelv(pris, n));
}
