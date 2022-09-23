#include <stdio.h>
#include <stdlib.h>




    float trosakPretplate(int N,float x)
   {
       return N*x;
   }

    int main ()

  {
      int brPrijatelja;
      float cijena, trosak;

      printf("Unesi broj prijatelja: ");
      scanf("%d",&brPrijatelja);
      printf("Unesi cijenu pretplate: ");
      scanf("%f",&cijena);
      trosak = trosakPretplate(brPrijatelja,cijena);
      printf("minimalni trošak pretplate iznosi %.2f", trosak);
      return 0;
  }




