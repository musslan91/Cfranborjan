#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
int main()
{
    system("chcp 1252");
    system("cls");

    char a[9];
    char v[]="20 - -";//Linjer som kommer fyllas på.
    printf("Ange datum som mm/dd/yy: ");
    scanf("%s", a);
    /*Deklarerar och kopierar textsträngarna från v till a och, v+6 och a+2 betyder vilka element de ligger i. tex
    a i element 2 och v i element 5. strncpy skiljer sig mot strcpy. strcpy har ingen
    kontroll att plats finns, men det har strncpy och nolltecken kmr saknas om a och v är längre än n.*/
    strncpy(v+6, a+2, 2); // Den sista 2:an betyder bara två tecken som tex mm/yy/dd                         v[6]=a[2]; v[7]=a[3];
    strncpy(v+0, a+5, 2);//  Den sista 2:an betyder bara två tecken som tex mm/yy/dd                          v[0]=a[5]; v[1]=a[6];
    strncpy(v+3, a+8, 2);//   Den sista 2:an betyder bara två tecken som tex mm/yy/dd                           v[3]=a[8]; v[4]=a[9];

    printf("Det amerikanska datumet är: %s\n", a);

    return 0;
}
