#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
int sira;
char karakter[20];
char soyad[20];
float ortalama;
char cinsiyet;
};
void takas(struct ogrenci *a1,struct ogrenci *a2)
{
    struct ogrenci temp=*a1;
    *a1=*a2;
    *a2=temp;
}

int main()
{

   struct ogrenci a1 = {2, "ahmet", "gedik", 2.3, 'e'};
   struct ogrenci a2={5,"oya","turkali",4.3,'k'};
   takas(&a1,&a2);
    char str[100];
    sprintf(str, "Sira: %d\nKarakter: %s\nSoyad: %s\nOrtalama: %.2f\nCinsiyet: %c\n", a1.sira, a1.karakter, a1.soyad, a1.ortalama, a1.cinsiyet);
    printf("%s", str);
    char str2[100];
    sprintf(str2, "\nSira: %d\nKarakter: %s\nSoyad: %s\nOrtalama: %.2f\nCinsiyet: %c\n", a2.sira, a2.karakter, a2.soyad, a2.ortalama, a2.cinsiyet);
    printf("%s", str2);

    return 0;
}
