#include <stdio.h>
#include <stdlib.h>
#include "kolapp.h"

int main()
{
    system("chcp 1252");
    system("cls");
    while(1){
        printf("Skriv 1 om du �r kund, 0 annars: Skriv 2 f�r nollst�ll\n");
        int kund;
        if(scanf("%d", &kund)!=1)
            break;
        if(kund==1){
            printf("Du fick nr: %d\n", ta_lapp());
            betjanas();
        }

        if(kund==2)
            init();

         if(kund==0){
            int nr=betjana_kund();
            if(nr>0)
                printf("Betj�na nr: %d\n", nr);
            else
                printf("Inga kunder i k�\n");

            }

    }
}
