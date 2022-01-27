#include <stdio.h>
#include <stdlib.h>
int main()

{
  int brojStupova,duljinaStupova,debljinaStupova;

  printf("broj,udaljenost među stupovima i debljina stupova\n");
  scanf("%d %d %d",&brojStupova,&duljinaStupova,&debljinaStupova);
  duljinaStupova*=100;
  int ukUdaljenost=(brojStupova-1)*duljinaStupova+(brojStupova-2)*debljinaStupova;
  printf("udaljenost je %d",ukUdaljenost);
}
