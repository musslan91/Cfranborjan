#include <stdio.h>
#include <stdlib.h>



int main()
{

int alternativ, alternativ2, alternativ3;
system("chcp 1252");

    printf("Du har valt att fly ifr�n den lite l�ngsamma Dietmarzombien.\n");
    printf("Du ser en ol�st cykel vid cykelst�llet och en ol�st bil vid parkeringen.\n");
    printf("\n");
    printf("Vilken av de tv� alternativen v�ljer du? \nv�lj 1:f�r cykeln \nv�lj 2: f�r bilen\n");
    scanf("%d",&alternativ);

if(alternativ==1){
    printf("\n");
    printf("Du g�r fram till den ol�sta cykeln.\n");
    printf("Du tar den och cyklar iv�g fr�n skolan.\n");

}
else if(alternativ==2){

    printf("Du g�r fram till den ol�sta bilen.\n");
    printf("\n");
    printf("Du ser att nyklarna sitter i t�ndningen och du startar men ser\n");
    printf("att br�nsleniv�n �r mycket l�g. Du �ker iv�g ifr�n skolan.\n");
    printf("Tryck p� 1 f�r att se forts�ttnigen med cykel.\n");
    printf("Tryck p� 2 f�r forts�ttningen med bil.\n");
    scanf("%d",&alternativ2);
}

if(alternativ2==1){

    printf("Du har nu cyklat ifr�n skolan och har nu n�tt en stig i skogen.\n");
    printf("Det har blivit m�rkt och du ser inte mycket men du cyklar in �nd�.\n");
    printf("Du ramlar med cykeln mitt i sp�ret och bryter din fot s� benet sticker ut\n");
    printf("Du skriker s� att lungorna g�r ondare �n foten och det lockar till sig zombies till skogen.\n");
}
else if(alternativ2==2){


    printf("Du hinner inte l�ngt med bilen innan bensinen tar slut.\n");
    printf("Du har �ven fastnat i en bilk� vars alla bil�gare har blivit zombies.\n");
    printf("Och de cirkulerar om dig och du �r fast i bilen.\n");
    printf("Ditt m�l var att l�mna staden d� det �r fullt med zombies.\n");

}
    printf("\n");
    printf("Tryck p� 1 f�r att se forts�ttnigen med cykel.\n");
    printf("Tryck p� 2 f�r forts�ttningen med bil.\n");
    scanf("%d",&alternativ3);

    if(alternativ3==1){

    printf("Du liggar vr�landes p� stigen med och zombies n�rmar sig\n");
    printf("Du f�rs�ker krypa ifr�n dem men de �r snabbare �n du\n");
    printf("De f�r tag p� din brutna fot och b�rjar bita. Du f�rs�ker f�rsvara dig\n");
    printf("Men du kan inte d� flera omringar dig och sliter ut dina in�lvor.\n");
    printf("Du var en v�ldigt d�lig �verlevare.\n");
    printf("����������GAME OVER�����������\a");

    }
    else if(alternativ3==2){

    printf("Du sitter nu helt ensam i en bil d�r hungriga zombies vill �t dig.\n");
    printf("Du tittar i handskfacket och ser en pistol.\n");
    printf("Du ser ingen annan utv�g �n att anv�nda den p� dig sj�lv.\n");
    printf("du skjuter dig sj�lv i huvudet och du var ingen bra �verlevare.\n");
    printf("������������GAME OVER��������������\a");



    }

    return 0;
}
