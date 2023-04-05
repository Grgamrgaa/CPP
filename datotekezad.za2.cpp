#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct zeko{
      int masa;
      int kolicina_hrane;
      int darezljivost;
      char ime[20];
}ze;


void unos(){

	FILE*filePointer;
	filePointer=fopen("zeko1.txt","a");

	printf("Kolika je masa zekana ?");
	scanf("%d", &ze.masa);
	printf("Koju kolicinu hrane zdere zeko ?");
	scanf("%d", &ze.kolicina_hrane);
	printf("Kolika je zekina darezljivost ?");
	scanf("%d", &ze.darezljivost);
	printf("Kako se zeko zove ?");
	scanf("%s", ze.ime);

	fprintf(filePointer, "%d  %d  %d  %s\n", ze.masa, ze.kolicina_hrane, ze.darezljivost, ze.ime);
	fclose(filePointer);
}
void ispis(){
    FILE*filePointer;
	filePointer=fopen("zeko1.txt","r");

	while(fscanf(filePointer,"%d %d %d %s", &ze.masa, &ze.kolicina_hrane, &ze.darezljivost, ze.ime)==4)
        printf("%d %d %d %s\n\n", ze.masa, ze.kolicina_hrane, ze.darezljivost, ze.ime);
        
   fclose(filePointer);   
}



int main()
{

   char odabir;

do{

    printf("1. Unos \n");
    printf("2. \n");
    printf("3. \n");
    printf("4. \n");
    printf("5. Exit\n");
    printf("6. Ispis\n");

    odabir=getch();

    switch (odabir){
    	case '1': unos();
    	break;
    	case '6': ispis();
    	break;
	 }
}while (odabir!='5');



    return 0;
}

