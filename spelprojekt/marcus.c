#include <stdio.h>
#include <stdlib.h>



int main()
{

int alternativ, alternativ2, alternativ3;
system("chcp 1252");

    printf("Du har valt att fly ifrån den lite långsamma Dietmarzombien.\n");
    printf("Du ser en olåst cykel vid cykelstället och en olåst bil vid parkeringen.\n");
    printf("\n");
    printf("Vilken av de två alternativen väljer du? \nvälj 1:för cykeln \nvälj 2: för bilen\n");
    scanf("%d",&alternativ);

if(alternativ==1){
    printf("\n");
    printf("Du går fram till den olåsta cykeln.\n");
    printf("Du tar den och cyklar iväg från skolan.\n");

}
else if(alternativ==2){

    printf("Du går fram till den olåsta bilen.\n");
    printf("\n");
    printf("Du ser att nyklarna sitter i tändningen och du startar men ser\n");
    printf("att bränslenivån är mycket låg. Du åker iväg ifrån skolan.\n");
    printf("Tryck på 1 för att se fortsättnigen med cykel.\n");
    printf("Tryck på 2 för fortsättningen med bil.\n");
    scanf("%d",&alternativ2);
}

if(alternativ2==1){

    printf("Du har nu cyklat ifrån skolan och har nu nått en stig i skogen.\n");
    printf("Det har blivit mörkt och du ser inte mycket men du cyklar in ändå.\n");
    printf("Du ramlar med cykeln mitt i spåret och bryter din fot så benet sticker ut\n");
    printf("Du skriker så att lungorna gör ondare än foten och det lockar till sig zombies till skogen.\n");
}
else if(alternativ2==2){


    printf("Du hinner inte långt med bilen innan bensinen tar slut.\n");
    printf("Du har även fastnat i en bilkö vars alla bilägare har blivit zombies.\n");
    printf("Och de cirkulerar om dig och du är fast i bilen.\n");
    printf("Ditt mål var att lämna staden då det är fullt med zombies.\n");

}
    printf("\n");
    printf("Tryck på 1 för att se fortsättnigen med cykel.\n");
    printf("Tryck på 2 för fortsättningen med bil.\n");
    scanf("%d",&alternativ3);

    if(alternativ3==1){

    printf("Du liggar vrålandes på stigen med och zombies närmar sig\n");
    printf("Du försöker krypa ifrån dem men de är snabbare än du\n");
    printf("De får tag på din brutna fot och börjar bita. Du försöker försvara dig\n");
    printf("Men du kan inte då flera omringar dig och sliter ut dina inälvor.\n");
    printf("Du var en väldigt dålig överlevare.\n");
    printf("§§§§§§§§§§GAME OVER§§§§§§§§§§§\a");

    }
    else if(alternativ3==2){

    printf("Du sitter nu helt ensam i en bil där hungriga zombies vill åt dig.\n");
    printf("Du tittar i handskfacket och ser en pistol.\n");
    printf("Du ser ingen annan utväg än att använda den på dig själv.\n");
    printf("du skjuter dig själv i huvudet och du var ingen bra överlevare.\n");
    printf("§§§§§§§§§§§§GAME OVER§§§§§§§§§§§§§§\a");



    }

    return 0;
}
