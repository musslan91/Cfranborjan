#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
	   }
	}

    if (flag) {
        printf("%s is not a palindrome", string1);
    }
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char str[100];
    char temp;
    int i,j = 0;

    printf("Enter the string: ");
    gets(str);

    i=0;
    j=strlen(str) -1;

    while (i<j){
    printf("i %d j %d\n", i,j);

    temp = str[i];
    str[j] = temp;
    i++;
    j--;
     }
}


int main()
{
    char name[30] = "Hello";
    printf("string before strrev(): %s\n",name);

    printf("string after strrev(): %s\n",strrev(name));

    return 0;
}
*/
