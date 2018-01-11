#include <stdio.h>
#include <stdlib.h>

double manskostnad(int antal, int minDag, int minovr){
   return 50 + antal*0.60 + minDag*2.50 + minovr*0.55;
       }

int main()
{
system("chcp 1252");
int n, dag, ovr;
printf("Antal samtal?\n");
scanf("%d", &n);

printf("Minuter dagtid?\n");
scanf("%d", &dag);

printf("Minuter övrig tid?\n");
scanf("%d", &ovr);

double kos = manskostnad(n, dag, ovr);
printf("Kostnad: %.2f", kos);

}
