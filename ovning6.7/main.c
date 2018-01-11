#include <stdio.h>
#include <stdlib.h>

void draw_line(int tecken){
    for(int i=1;i<=tecken;i++){
    printf("_");
    }
    printf("\n");
    return;
}

int main()
{

    int tecken;
    printf("Hur många rader understruket vill du ha?\n");
    scanf("%d", &tecken);
    draw_line(tecken);

    return 0;
}
