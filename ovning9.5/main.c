#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[9];
    char v[]="20 - -";
    printf("Ange datum som mm/dd/yy: ");
    scanf("%s", a);
    v[6]=a[2]; v[7]=a[3];
    v[0]=a[5]; v[1]=a[6];
    v[3]=a[8]; v[4]=a[9];

    printf("Det amerikanska datumet är: %s\n", a);

    return 0;
}
