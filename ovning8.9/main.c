#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

double kol_sum(double falt[][5], int antal_rader, int kolumner) {
  double sum = 0;
  for (int i=0;i<antal_rader;i++)
    sum=sum+falt[i][kolumner];//
  return sum;
}

int main()
{
    system("chcp 1252");
    system("cls");

    double faltet[4][5];//4 rader och 5 kolumner.
  faltet[0][2]=1;//3:e kolumnen
  for (int i=1; i<4; i++)//for loop i mindre än fyra öka + 1.
    faltet[i][2]=faltet[i-1][2]/10;//i minskar en rad hela tiden i loopen och delar det nya värdet med 10.
  printf("Summan av tredje kolumnen är %f", kol_sum(faltet, 4, 2));//Skickar tillbaks faltet arrayen, 2 till rader och 4 till k kolumner.

    return 0;
}
