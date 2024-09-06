#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct zaman{
int saat;
int dakika;
int saniye;
};
struct zaman zamantopla(struct zaman a1,struct zaman a2)
{
struct zaman temp;
int toplam_saniye = (a1.saat+a2.saat) * 3600+(a1.dakika+a2.dakika)*60 + (a1.saniye+a2.saniye);
    temp.saat = toplam_saniye / 3600;
    temp.dakika = (toplam_saniye % 3600) / 60;
    temp.saniye = toplam_saniye % 60;
    if(temp.saat>=24)
    {
        temp.saat=temp.saat-24;
    }
return temp;
};


int main()
{

    struct zaman a1,a2;
    a1.saat=23,a1.dakika=30,a1.saniye=20;
    a2.saat=1,a2.dakika=0,a2.saniye=40;
    a1= zamantopla(a1, a2);
    printf("%02d:%02d:%02d",a1.saat,a1.dakika,a1.saniye);
    return 0;
}
