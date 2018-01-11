#include <stdio.h>
#include <stdlib.h>

int main()
{

int tuna = 19;
int * ptuna = &tuna;

printf("Adress       Name      Value\n");
printf("%p     %s      %d\n", ptuna, "tuna", tuna);
printf("%p     %s      %p\n", &ptuna, "ptuna", ptuna);

printf("\n*ptuna: %d \n", *ptuna);

*ptuna = 71;

printf("\n*tuna: %d \n", *ptuna);


//printf("%p", &tuna); // Skirver ut vart i minnet "tuna" ligger alltså adressen.

}
