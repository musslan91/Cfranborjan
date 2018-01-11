#include <stdio.h>
#include <stdlib.h>
#include "temperatur.h"

int main() {
  while (1) {
    printf("Vill du rapportera aktuell temperatur, skriv 1, annars 0. ");
    int rapport;
    if (scanf("%d", &rapport)!=1)
      break;
    if (rapport) {
      int t, m;
      double tmp;
      printf("Tidpunkt (tt mm)? ");
      scanf("%d%d", &t, &m);
      printf("Temperatur? ");
      scanf("%lf", &tmp);
      if (!observerat(t, m, tmp))
        printf("Rapporten misslyckades\n");
    }
    else
      printf("Klockan %02d:%02d var det %.1f grader\n",
             obs_tim(), obs_min(), aktuell_temp());
  }
}
