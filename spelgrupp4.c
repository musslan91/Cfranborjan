#include <stdio.h>
#include <stdlib.h>

int main()
{
system("chcp 1252");

int val,val2,val3,val4; //Defenitioner om man v�ljer 1 i b�rjan
int Val; //Defenitioner om man v�ljer 2 i b�rjan

//Main b�rjan till ber�ttelsen
printf("Du �r p� skolan i mj�rdevi och har programmerat.Du har precis b�rjat ta en paus fr�n kodandet.\n");
printf("Pl�tsligt f�r du h�ra ett st�nanden fr�n entr�n, din magk�nsla s�ger att du inte borde g� ut ditt. Vad g�r du?\n");
printf("1: G�r ut till entr�n\n2: Smitter ut fr�n n�dutg�ngen\n\n");
scanf("%d",&val);

    //Om man valde att g� ut till entr�n ska detta skrivas ut
    if(val==1){
    printf("N�r du kommer ut till entr�n st�ter du p� en zombie med en pipa i munnen, m�ste vara Dietmar...\n");
    printf("Han b�rjar sakta g� emot dig, hans vikt s�nker hans fart n�got. Vad g�r du?\n");
    printf("1: F�rs�ka d�da Dietmar\n2: Springa ut fr�n byggnaden\n\n");
    scanf("%d",&val2);
    }

        //Om man valde 1 i andra valet ska det bli GAME OVER!
        if(val2==1){
        printf("Du f�rs�ker d�da Dietmar, men han anv�nder sin �verl�gsna vikt f�r att f� ner dig p� marken.\n");
        printf("N�r du v�l �r nere p� marken biter Dietmar dig.\n\n");
        printf("GAME OVER!\a");
        return 0;
        }

        //Om man valde 2 i andra valet ska den h�r texten skrivas ut.
        else if(val2==2){
            printf("N�r du kommer ut ur byggnaden vill du f�rs�ka ta dig till en s�ker plats.\n");
            printf("Ikano huset �r en s�krare plats, men st�ckan dit �r l�ng.\nDu beh�ver n�got som g�r snabbt, en bil eller cyckel kanske?\n");
            printf("Vill du leta efter en ol�st cykel eller bil?\n1:Cykel\n2:Bil\n\n");
            scanf("%d",&val3);
            }

                //Om man valde 1 i tredje valet blir det GAME OVER.
                if(val3==1){
                    printf("Du hittar en ol�st cykel och b�rjar cykla i riktning mot Ikano huset.\n");
                    printf("Men p� v�gen dit blir du �verfallen av fler zombies.\nDe f�r dig att falla av cykeln.\n");
                    printf("GAME OVER!\a\n");
                    return 0;
                }
                //Om man valde 1 i tredje valet ska den h�r texten skrivas ut.
                else if(val3==2){
                    printf("Du hittar en ol�st bil med bilnyckeln kvar.\nMen du m�rker att den har v�ldigt lite bensinen kvar.\n");
                    printf("Om du tar bilen kommer du m�jligen komma fram till Ikano huset.\nVill du ge det ett f�rs�k?\n");
                    printf("1:Ja\n2:Nej\n\n");
                    scanf("%d",&val4);
                    }

                        //Om du valde att k�ra bilen vinner du, dvs �verlever.
                        if(val4==1){
                            printf("Du lyckades starta bilen och n�dde Ikano huset!\a\n");
                            printf("DU �VERLEVDE ZOMBIE APOKALYPSEN!\n");
                            return 0;
                        }
                        //Om du inte valde att k�ra bilen, d�r du av utmattning.
                        else if(val4==2){
                            printf("Eftersom du inte valde att anv�nda bilen blev du tvungen att g�.\n");
                            printf("Medan du gick f�r zombies syn p� dig och du blir jagad.\n");
                            printf("Du blev tvungen att springa ifr�n dem, men du blir utmattad.\nZombierna f�r tag p� dig.\n");
                            printf("GAME OVER!\a");
                            return 0;
                        }


    //Om man valde alternativ 2 i f�rsta val ska detta skrivas ut
    else if(val==2){
    printf("N�r du kommer ut i n�dutg�ngen st�ter du p� en zombie med en l�ng pinne.\nM�ste vare Tomas...\n");
    printf("Han b�rjar g� emot dig. Vad g�r du?\n");
    printf("1: F�rs�ka d�da Tomas\n2: Fly fr�n Tomas\n\n");
    scanf("%d",&Val);
    }
        //Om man valde att sl� ner Tomas
        if(Val==1){
            printf("Du lyckas d�da Tomas, du var starkare �n honom.\n");
            printf("Men det lockade till sig fler zombies i omr�det och du blir omringad.\n");
            printf("GAME OVER\a");
            return 0;
        }
        else if(Val==2){
            printf("Du r�kade spring mot Autoliv och utl�ste deras larm.\nZombierna h�r larmet och kommer emot dig.\nGAMER OVER!\a\n");
        }

    return 0;
}
