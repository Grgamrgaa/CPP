#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct ocjene{
                char ime[20];
                char predmet[20];
                int ocjena;
                }oc;


void novi(){

	FILE*filePointer;
	filePointer=fopen("ocjene.txt","a");

	printf("Kako se zove ucenik ?");
	scanf("%s", oc.ime);
	printf("Koji je predmet ?");
	scanf("%s", oc.predmet);
	printf("kolika je ocjena ?");
	scanf("%d", &oc.ocjena);

	fprintf(filePointer, "%s, %s, %d", oc.ime, oc.predmet, oc.ocjena);
	fclose(filePointer);
}
void ispis(){
    FILE*filePointer;
	filePointer=fopen("ocjene.txt","r");

	while(fscanf(filePointer,"%s %s %d", oc.ime, oc.predmet, &oc.ocjena)==3)
        printf("%s %s %d\n\n", oc.ime, oc.predmet, oc.ocjena);
}


int main()
{

char odabir;

do{

    printf("1. Unos ocjene\n");
    printf("2. Prosjek_ocjen\n");
    printf("3. Br_predmeta\n");
    printf("4. Prosjek_predmeta\n");
    printf("5. Exit\n");
    printf("6. Ispis\n");

    odabir=getch();
    
    switch (odabir){
    	case '1': novi();
    	break;
    	case '6': ispis();
    	break;
	 }
}while (odabir!=5);







    return 0;
}

