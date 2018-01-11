#include <stdio.h>

struct intervall {
    double golv, tak;
};

struct intervall nytt_plus_minus(double median, double konf) {
    struct intervall lokalintervall;
    lokalintervall.golv = median-konf;
    lokalintervall.tak = median+konf;
    return lokalintervall;
}

struct intervall multiplicera_plus_minus(
    struct intervall faktor1, struct intervall faktor2
)
{
    struct intervall resultat;
    double varde[4], minsta, storsta;
    int ix;
    varde[0] = faktor1.golv*faktor2.golv;
    varde[1] = faktor1.golv*faktor2.tak;
    varde[2] = faktor1.tak*faktor2.golv;
    varde[3] = faktor1.tak*faktor2.tak;
    minsta = storsta = varde[0];
    for(ix = 1; ix < 4; ix++) {
       if(varde[ix]<minsta) minsta = varde[ix];
       if(varde[ix]>storsta) storsta = varde[ix];
    }
    resultat.golv = minsta; resultat.tak = storsta;
    return resultat;
}

void skrivut_plus_minus(struct intervall itv) {
    printf("%lg±%lg\n", (itv.golv+itv.tak)/2.0,
           (itv.tak-itv.golv)/2.0);
}

int main(void) {
    struct intervall alfa, beta, gamma;

    alfa = nytt_plus_minus(23.546, 0.024);
    printf("alfa = [%lg %lg]\n", alfa.golv, alfa.tak);
    skrivut_plus_minus(alfa);
    beta = nytt_plus_minus(3.8, 0.2);
    printf("beta = [%lg %lg]\n", beta.golv, beta.tak);
    skrivut_plus_minus(beta);
    gamma = multiplicera_plus_minus(alfa, beta);
    printf("gamma = [%lg %lg]\n", gamma.golv, gamma.tak);
    skrivut_plus_minus(gamma);

    return 0;
}
