#include <stdio.h>
#include <stdlib.h>

struct zaman{
int saat;
int dakika;
int saniye;
};
struct zaman farkibul(struct zaman z1,struct zaman z2)
{
    int saniye1=z1.saat*3600+z1.dakika*60+z1.saniye;
    int saniye2=z2.saat*3600+z2.dakika*60+z2.saniye;
    int fark=saniye1-saniye2;
    if(saniye1<saniye2)
        fark=fark*(-1);
struct zaman temp;
    temp.saat=fark/3600;
    temp.dakika=(fark%3600)/60;
    temp.saniye=((fark%3600)%60);
    return temp;

};



int main()
{
    struct zaman z1,z2,temp;
    printf("birinci zamani giriniz: ");
    scanf("%d:%d:%d",&z1.saat,&z1.dakika,&z1.saniye);
     printf("ikinci zamani giriniz: ");
    scanf("%d:%d:%d",&z2.saat,&z2.dakika,&z2.saniye);
   temp=farkibul(z1,z2);
    printf("ikisi arasindaki farki bulunuz:%d:%d:%d",temp.saat,temp.dakika,temp.saniye);
    return 0;
}
