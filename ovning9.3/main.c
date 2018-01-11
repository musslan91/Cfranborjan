#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rader=0;
    int text;

    while((text=getchar())!= EOF){
    if(text=='\n')
        rader++;
    }
    printf("%d", rader);
    return 0;
}
