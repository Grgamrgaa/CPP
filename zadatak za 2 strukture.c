#include <stdio.h>
#include <stdlib.h>
struct guster{
    char boja[20];
    int visina;
    int brzina;
    char jedel_muhe[2];
};
int main()
{
  struct guster g[6]={
 "plava",23,45,"da",
 "zelena",17,34,"ne",
 "crvena",22,54,"ne",
 "zuta",14,63,"da",
 "bijela",26,45,"da"
  };

  printf("unesi boju gustera\n");
  scanf("%s", g[5].boja);
  printf("unesi visinu gustera\n");
  scanf("%d", &g[5].visina);
  printf("unesi brzinu gustera\n");
  scanf("%d", &g[5].brzina);
  printf("jedel muhe guster\n");
  scanf("%s", g[5].jedel_muhe);


  for(int i=0;i<6;i++)
    printf("%s\t%d\t%d\t%s\n",g[i].boja,g[i].visina,g[i].brzina,g[i].jedel_muhe);
    return 0;
}
