#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


struct mackick{
                int br_zivota;
                int br_nogu;
                int visina;
                char ime[20];
                }m;

void novi(){

	FILE*filePointer;
	filePointer=fopen("mackick.txt","w");

	printf("koliko zivota ima mackick?");
	scanf("%d", &m.br_zivota);
	printf("koliko mackick ima nogu?");
	scanf("%d", &m.br_nogu);
	printf("kolika je visina mackicka?");
	scanf("%d", &m.visina);
	printf("ime mackicka?");
	scanf("%s", m.ime);

	fprintf(filePointer, "%d, %d, %d, %s", m.br_zivota, m.br_nogu, m.visina, m.ime);
	fclose(filePointer);
}
void maks(){

	FILE*filePointer;
	filePointer=fopen("mackick.txt","r");
	char ovojenajvecamackicka[90];
	int max=0,odabir;
	printf("pocem os maxat?\n1.broj nogu\n2.broj zivota\n3.visina");
	scanf("%d",&odabir);
	while(fscanf(filePointer, "%d, %d, %d, %s", m.br_zivota, m.br_nogu, m.visina, m.ime)==4){
        if(odabir==2)
        if(m.br_zivota>=max){
			max=m.br_zivota;
			strcpy(ovojenajvecamackicka, m.ime);
		}
        if(odabir==1)
            if(m.br_nogu>=max){
			max=m.br_nogu;
			strcpy(ovojenajvecamackicka, m.ime);
		}
        if(odabir==3)
		if(m.visina>=max){
			max=m.visina;
			strcpy(ovojenajvecamackicka, m.ime);
		}

	}
	printf("najveca je mackicka %s", ovojenajvecamackicka);


	fclose(filePointer);
}

void mini(){

	FILE*filePointer;
	filePointer=fopen("mackick.txt","r");
	char ovojenajmanjamackicka[90];
	int min=0;
	while(fscanf(filePointer, "%d, %d, %d, %s", m.br_zivota, m.br_nogu, m.visina, m.ime)==4){
		if(m.visina>min){
			min=m.visina;
			strcpy(ovojenajmanjamackicka, m.ime);
		}

	}
	printf("najmanja je mackicka %s", ovojenajmanjamackicka);


	fclose(filePointer);
}
void ispis(){

	FILE*filePointer;
	filePointer=fopen("mackick.txt","r");

	while(fscanf(filePointer, "%d, %d, %d, %s", &m.br_zivota, &m.br_nogu, &m.visina, m.ime)==4){
            printf("%d, %d, %d, %s\n\n", m.br_zivota, m.br_nogu, m.visina, m.ime);
	}




	fclose(filePointer);
}
int main(){


int odabir;
do{
    printf("1. unesi novog mackicka\n");
    printf("2.max\n");
    printf("3.min\n");
    printf("4.ispis\n");
	printf("5.Exit\n");
	scanf("%d",&odabir);

if(odabir==1){
	novi();}
	else if(odabir==2){
	maks();}
    else if(odabir==3){
	mini();}
    else if(odabir==4){
	ispis();}
    else if(odabir==5){
	printf("5.Exit\n");}

} while (odabir!=5);




}
