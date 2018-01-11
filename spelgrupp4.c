#include <stdio.h>
#include <stdlib.h>

int main()
{
system("chcp 1252");

int val,val2,val3,val4; //Defenitioner om man väljer 1 i början
int Val; //Defenitioner om man väljer 2 i början

//Main början till berättelsen
printf("Du är på skolan i mjärdevi och har programmerat.Du har precis börjat ta en paus från kodandet.\n");
printf("Plötsligt får du höra ett stönanden från entrén, din magkänsla säger att du inte borde gå ut ditt. Vad gör du?\n");
printf("1: Går ut till entrén\n2: Smitter ut från nödutgången\n\n");
scanf("%d",&val);

    //Om man valde att gå ut till entrén ska detta skrivas ut
    if(val==1){
    printf("När du kommer ut till entrén stöter du på en zombie med en pipa i munnen, måste vara Dietmar...\n");
    printf("Han börjar sakta gå emot dig, hans vikt sänker hans fart något. Vad gör du?\n");
    printf("1: Försöka döda Dietmar\n2: Springa ut från byggnaden\n\n");
    scanf("%d",&val2);
    }

        //Om man valde 1 i andra valet ska det bli GAME OVER!
        if(val2==1){
        printf("Du försöker döda Dietmar, men han använder sin överlägsna vikt för att få ner dig på marken.\n");
        printf("När du väl är nere på marken biter Dietmar dig.\n\n");
        printf("GAME OVER!\a");
        return 0;
        }

        //Om man valde 2 i andra valet ska den här texten skrivas ut.
        else if(val2==2){
            printf("När du kommer ut ur byggnaden vill du försöka ta dig till en säker plats.\n");
            printf("Ikano huset är en säkrare plats, men stäckan dit är lång.\nDu behöver något som går snabbt, en bil eller cyckel kanske?\n");
            printf("Vill du leta efter en olåst cykel eller bil?\n1:Cykel\n2:Bil\n\n");
            scanf("%d",&val3);
            }

                //Om man valde 1 i tredje valet blir det GAME OVER.
                if(val3==1){
                    printf("Du hittar en olåst cykel och börjar cykla i riktning mot Ikano huset.\n");
                    printf("Men på vägen dit blir du överfallen av fler zombies.\nDe får dig att falla av cykeln.\n");
                    printf("GAME OVER!\a\n");
                    return 0;
                }
                //Om man valde 1 i tredje valet ska den här texten skrivas ut.
                else if(val3==2){
                    printf("Du hittar en olåst bil med bilnyckeln kvar.\nMen du märker att den har väldigt lite bensinen kvar.\n");
                    printf("Om du tar bilen kommer du möjligen komma fram till Ikano huset.\nVill du ge det ett försök?\n");
                    printf("1:Ja\n2:Nej\n\n");
                    scanf("%d",&val4);
                    }

                        //Om du valde att köra bilen vinner du, dvs överlever.
                        if(val4==1){
                            printf("Du lyckades starta bilen och nådde Ikano huset!\a\n");
                            printf("DU ÖVERLEVDE ZOMBIE APOKALYPSEN!\n");
                            return 0;
                        }
                        //Om du inte valde att köra bilen, dör du av utmattning.
                        else if(val4==2){
                            printf("Eftersom du inte valde att använda bilen blev du tvungen att gå.\n");
                            printf("Medan du gick får zombies syn på dig och du blir jagad.\n");
                            printf("Du blev tvungen att springa ifrån dem, men du blir utmattad.\nZombierna får tag på dig.\n");
                            printf("GAME OVER!\a");
                            return 0;
                        }


    //Om man valde alternativ 2 i första val ska detta skrivas ut
    else if(val==2){
    printf("När du kommer ut i nödutgången stöter du på en zombie med en lång pinne.\nMåste vare Tomas...\n");
    printf("Han börjar gå emot dig. Vad gör du?\n");
    printf("1: Försöka döda Tomas\n2: Fly från Tomas\n\n");
    scanf("%d",&Val);
    }
        //Om man valde att slå ner Tomas
        if(Val==1){
            printf("Du lyckas döda Tomas, du var starkare än honom.\n");
            printf("Men det lockade till sig fler zombies i området och du blir omringad.\n");
            printf("GAME OVER\a");
            return 0;
        }
        else if(Val==2){
            printf("Du råkade spring mot Autoliv och utlöste deras larm.\nZombierna hör larmet och kommer emot dig.\nGAMER OVER!\a\n");
        }

    return 0;
}
