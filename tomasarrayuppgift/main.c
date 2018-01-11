#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    system("chcp 1252");
    system("cls");

    int resultat[10];

    int n;

    for(int i=0;i<10;i++){
        printf("skriv resultat %d: ", i+1);
        scanf("%d", &n);
        resultat[i] = n;
    }

        int cnt=1;
    for(int i=0;i<10;i++){
        ++cnt;
        if(cnt==3){
            printf("\n");
            cnt=0;
        }
    printf("%2d ", resultat[i]);
}
    return 0;
}

