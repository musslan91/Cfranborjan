#include <stdio.h>
#include <stdlib.h>


void addOne(int a);
void addOne3(int *a);
void initArray(int *arr, int length);
int main()
{
    // Allokerar mena i runtime
    int *tal2 = malloc(sizeof(int));
    *tal2 = 10;

    addOne3(tal2);
    printf("%d \n",*tal2);

    // Ger tillbaka minnet n�r man �r klar med den
    free(tal2);

    // Arrayer �r ocks� pekare
    int array[100];
    initArray(array, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", array[i]);
    }

    // Dynamiska arrayer
    // Med dynamiska arrayer, beh�ver inte storleken vara
    // konstant, och man kan ut�ka arrayen under runtime.
    int size = 3;
    char *dynamicArray = (char*) malloc(size * sizeof(char));
    dynamicArray = "Simon";
    printf("%s", dynamicArray);

    // Ut�ka arrayen med 10
    dynamicArray = (char*) realloc(dynamicArray, (size + 10) * sizeof(char));

    free(dynamicArray);

    return 0;
}

// Call by value,
// En kopia som skickas in till funktionen.
// Det riktiga v�rdet �ndras inte.
void addOne(int a)
{
    a = a + 1;
}
// Call by reference, original v�rldet ifr�n main
// kommer att �ndras i denna funktionen
void addOne3(int *a)
{
    *a = *a + 1;
}
void initArray(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = i + 1;
    }
}
