#include <stdio.h>
#include <stdlib.h>
struct musteri{
int sira;
char adsoyad[50];
char telefon[15];
float borc;
char cinsiyet;
};
void sirala(struct musteri *a1,struct musteri *a2,struct musteri *a3)
{
   if(a1->borc>a2->borc)
       {
          struct musteri temp=*a1;
        *a1=*a2;
        *a2=temp;
       }
       if(a1->borc>a3->borc)
       {
          struct musteri temp=*a1;
        *a1=*a3;
        *a3=temp;
       }
       if(a2->borc>a3->borc)
       {
          struct musteri temp=*a2;
        *a2=*a3;
        *a3=temp;
       }

}

int main()
{

   struct musteri a1={2,"ahmet terk","2541",12.5,'e'};
    struct musteri a2={5,"oya git","1425",4.3,'k'};
   struct musteri a3={5,"selim demir","4568",18.3,'e'};
    sirala(&a1,&a2,&a3);

    printf("%d %s %s %.1f %c\n",a1.sira,a1.adsoyad,a1.telefon,a1.borc,a1.cinsiyet);
    return 0;
}
