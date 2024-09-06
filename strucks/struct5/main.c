#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct zaman
{
    int saat;
    int dakika;
    int saniye;
};

void zamanisirala(struct zaman *a1,struct zaman *a2)
{
    if(a1->saat>a2->saat)
    {
        struct zaman temp=*a1;
        *a1=*a2;
        *a2=temp;

    }

    else if((*a1).saat=(*a2).saat)
    {
        if(a1->dakika>a2->dakika)
        {
            struct zaman temp=*a1;
            *a1=*a2;
            *a2=temp;
        }
        else if(a1->dakika=(*a2).dakika)
        {
            if(a1->saniye>a2->saniye)
            {
                struct zaman temp=*a1;
                *a1=*a2;
                *a2=temp;
            }
        }
    }

};
int main()
{
    struct zaman a1,a2;
    a1.saat=2,a1.dakika=0,a1.saniye=41;
    a2.saat=1,a2.dakika=0,a2.saniye=40;
    zamanisirala(&a1,&a2);
    printf("%02d:%02d:%02d\n",a1.saat,a1.dakika,a1.saniye);
    printf("%02d:%02d:%02d",a2.saat,a2.dakika,a2.saniye);
    return 0;
}
