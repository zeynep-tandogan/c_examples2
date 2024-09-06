#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
 char ad[20];
 char soyad[20];
 float ortalama;

};


int main()
{
    struct ogrenci liste[10];
    for(int i=0;i<5;i++)
    {
        printf("ad soyad ortalama girinz:\n");
        scanf("%s %s %f",&liste[i].ad,liste[i].soyad,&liste[i].ortalama);
    }

    for(int i=0;i<4;i++)
{
    for(int j=i+1;j<5;j++)
    {
        if(liste[i].ortalama<liste[j].ortalama)
           {
               float degisken=liste[i].ortalama;
               liste[i].ortalama=liste[j].ortalama;
               liste[j].ortalama=degisken;
               char degisken2[20];
                strcpy(degisken2, liste[i].ad);
                strcpy(liste[i].ad, liste[j].ad);
                strcpy(liste[j].ad, degisken2);

                char degisken3[20];
                strcpy(degisken3, liste[i].soyad);
                strcpy(liste[i].soyad, liste[j].soyad);
                strcpy(liste[j].soyad, degisken3);
           }
    }
}
printf("\nsirali hali:\n");
for(int i=0;i<5;i++)
    printf("%s %s:%1.2f\n",liste[i].ad,liste[i].soyad,liste[i].ortalama);

    return 0;
}
