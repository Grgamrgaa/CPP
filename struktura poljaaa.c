#include <stdio.h>
#include <stdlib.h>

struct ucenici{
    int bodovi;
    char prezime[20];
    char OIB[11];
    int godiste;
};

int main()
{

    struct ucenici uc[20]={
    25, "babac","01524689261", 2021,
    12, "lukac","01524689299", 2012,
    23, "jankovic","01524689298", 2031,
    5, "kolic","01524689221", 2033,
    22, "ralic","01524689212", 2011,
    20, "bubic","01524689200", 2022,
    19, "akma","01524689211", 2023,
    18, "risto","01524689222", 2024,
    17, "papac","01524689233", 2025,
    16, "susac","01524689244", 2029,
    15, "grubnic","01524689255", 2006,
    14, "kolaric","01524689260", 2004,
    13, "grgic","01524689269", 2026,
    12, "duric","01524689268", 2020,
    11, "dokuz","01524689267", 2027,
    10, "kolas","01524689266", 2028,
    2, "rukva","01524689265", 2001,
    3, "tuka","01524689264", 2009,
    1, "kukac","01524689263", 2008,
    6, "makic","01524689262", 2003
    };



    for(i=0; i<n; i++) sum+=uc[i],bodovi;

    float avg= float sum/20;
    for(i=0; i<20; i++){
            printf("%s : %d",uc[i],prezime,uc[i],bodovi);

    }





    return 0;
}
