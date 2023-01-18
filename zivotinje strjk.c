#include<stdio.h>
#include<stdlib.h>

struct zivotinja
{
    char kako_se_glasa[50];
    int broj_nogu;
    int visina;
    char spec[20];
};
      void broj_nogu(struct zivotinja*z){
    printf("Ima %d noge\n\n", z->broj_nogu);
      }

    void glasanje(struct zivotinja*z){
    printf("Glasa se %s\n", z->kako_se_glasa);
    }


int main(void)
{
    struct zivotinja z[3]={"mjau mjau",4,30,"macka"
    "vau vau",4,40,"pas"};

    printf("UNESI PODATKE O ZIVOTINJI:\n");
    printf("Unesi kako se glasa zivotinja:\n");
    scanf("%s", &z[2].kako_se_glasa);
    printf("Unesi koliko zivotinja ima nogu:\n");
    scanf("%d", &z[2].broj_nogu);
    printf("Unesi visinu zivotinje u cm:\n");
    scanf("%d", &z[2].visina);
    printf("Unesi o kojoj se zivotinji radi:\n");
    scanf("%s", &z[2].spec);

    broj_nogu(&z[2]);
    glasanje(&z[2]);
}
