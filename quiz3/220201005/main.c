 #include <stdio.h>
#include <stdlib.h>
//220201005_zeynep tandoðan
 int satirhesapla(int t, int *d)
 {
   int i,toplam=0;
   for(i=1;d[0]>toplam;i++)
   {
       toplam=toplam+i;
       if(toplam==d[0])
       {
           d[1]=i;
           return 1;
       }
   }
   return 0;
 }
 void ucgencizdir(int *d)
 {
     //d[0]=t degeri
     //d[1]= satir sayisi
     int satir=d[1];
     for(int i=1;i<=satir;i++)
     {
        for(int j=1;j<=satir-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("x ");
        }
        printf("\n");
     }
 }

int main()
{
char devam;
    do
    {

        int T;
        int dizi[2];
        printf("lutfen bir T degeri giriniz:");
        scanf("%d",&T);
        dizi[0]=T;
        if(satirhesapla(T,dizi))
        {
            printf("hesaplanan satir sayisi:%d\n",dizi[1]);
            ucgencizdir(dizi);

        }

        else
            printf("ucgen cizdirmeye uygun olmayan bir sayi girdiniz\n");
        printf("devam etmek icin 'y' cikis icin 'n giriniz:\n");
        printf("devam etmek istiyor musunuz:");
        scanf("%s",&devam);
2
    }
    while(devam=='y');

    return 0;
}
