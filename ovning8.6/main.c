#include <stdio.h>
#include <stdlib.h>
#define N 10

    double medelv(double a[], int n) {
    double sum = 0;
    for (int i=0; i<n; i++)
    sum += a[i];//sum=sum + a[i], �r samma sak.
    return sum / n;
}
int main()
{
    system("chcp 1252");
    system("cls");
    double pris[N];
   // L�s in f�ltstorleken och skapa f�ltet
   int n=0;

   while(n<N){
    printf("Pris/min f�r kort nr %d\n", n+1);
   if(scanf("%lf", &pris[n]) !=1)
    break;
   n++; //�ka antalet typer av kort med 1.
}
    //Ber�kna det minsta priset.
    int billigast=0;            //Index f�r billigaste.
    for(int i=1;i<n;i++){
        if(pris[i]<pris[billigast])
            billigast=i;//nytt l�gsta pris funnrt.

    }
    printf("\nKort nr %d �r billigast. \n", billigast+1);
    printf("Kostnad: %4.2f kr/minut", pris[billigast]);
    printf("\nMedelv�rde f�r priser: %1.2f\n", medelv(pris, n));
}
