
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int meatballs[5] = {7,9,43,21,3};

    printf("Elements \t Adress \t Value \n");

    for(i=0; i<5; i++)
    {
        printf("Meatballs[%d] \t %p \t %d \n",i, &meatballs[i],meatballs[i]);
    }

    // Arrays names are just pointers to the first elements
    printf("\nmeatballs \t\t %p \n", meatballs); // Behöver inte ha & före meatballs

    // Dereference it:
    printf("\n*(meatballs) \t\t %d \n", *(meatballs));

    printf("\n*(meatballs+1) \t\t %d \n",*(meatballs+1));

    printf("\n*(meatballs+2) \t\t %d \n",*(meatballs+2));

    printf("\n*(meatballs+3) \t\t %d \n",*(meatballs+3));

    printf("\n*(meatballs+4) \t\t %d \n",*(meatballs+4));

    return 0;
}
