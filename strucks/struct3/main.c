#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//tam çalışmıyo!!
struct zaman{
int saat;
int dakika;
int saniye;
};

struct zaman yenizaman(int h,int m,int s,int s2)
{
    struct zaman temp;

    int m2=0,h2=0;
    int m3=m+m2,s3;
    if(s+s2>=60)
    {
         m2=(s2+s)/60;
        if((m+m2)>=60)
        {
             h2=(m+m2)/60;
            m3=(m+m2)%60;
        }

       s3 =(s+s2)%60;
    }
    temp.saat=h+h2;
    temp.dakika=m3;
    temp.saniye=s3;
   return temp;
};
int main()
{
   int h,m,s,s2;
    printf("zaman girin:");
    scanf("%d:%d:%d",&h,&m,&s);
    printf("eklenecek saniye girin:");
    scanf("%d",&s2);
    struct zaman z1;
    z1=yenizaman(h,m,s,s2);
    printf("%02d:%02d:%02d",z1.saat,z1.dakika,z1.saniye);
    return 0;
}
/*
#include <stdio.h>

// zaman yapısı tanımlanıyor
struct zaman {
    int saat;
    int dakika;
    int saniye;
};

// yenizaman fonksiyonu tanımlanıyor
struct zaman yenizaman(int h, int m, int s, int s2) {

    // temp adlı bir zaman yapısı oluşturuluyor
    struct zaman temp;

    // m2 ve h2 adlı değişkenler tanımlanıyor
    int m2 = 0, h2 = 0;

    // s ve s2 toplam saniye olarak hesaplanıyor
    int toplam_saniye = s + s2;

    // eğer toplam saniye 60 veya daha fazla ise,
    // dakika ve saat bilgileri güncelleniyor
    if (toplam_saniye >= 60) {
        m2 = toplam_saniye / 60;
        toplam_saniye %= 60;

        if ((m + m2) >= 60) {
            h2 = (m + m2) / 60;
            m = (m + m2) % 60;
        } else {
            m += m2;
        }
    }

    // yeni saat, dakika ve saniye bilgileri temp yapısına atanıyor
    temp.saat = h + h2;
    temp.dakika = m;
    temp.saniye = toplam_saniye;

    // temp yapısı geri döndürülüyor
    return temp;
}

int main() {

    // saat, dakika, saniye ve s2 değişkenleri tanımlanıyor
    int h, m, s, s2;

    // kullanıcıdan saat, dakika ve saniye bilgileri alınıyor
    printf("zaman girin (hh:mm:ss): ");
    scanf("%d:%d:%d", &h, &m, &s);

    // kullanıcıdan eklenecek saniye bilgisi alınıyor
    printf("eklenecek saniye girin: ");
    scanf("%d", &s2);

    // yeni zaman yapısı oluşturuluyor
    struct zaman z1 = yenizaman(h, m, s, s2);

    // yeni zaman bilgileri ekrana yazdırılıyor
    printf("%02d:%02d:%02d", z1.saat, z1.dakika, z1.saniye);

    return 0;
}
*/
/*#include <stdio.h>

struct zaman {
    int saat;
    int dakika;
    int saniye;
};

struct zaman yenizaman(int h, int m, int s, int s2) {
    struct zaman temp;

    int toplam_saniye = h * 3600 + m * 60 + s + s2;
    temp.saat = toplam_saniye / 3600;
    temp.dakika = (toplam_saniye % 3600) / 60;
    temp.saniye = toplam_saniye % 60;

    return temp;
}

int main() {
    int h, m, s, s2;
    printf("zaman girin (hh:mm:ss): ");
    scanf("%d:%d:%d", &h, &m, &s);
    printf("eklenecek saniye girin: ");
    scanf("%d", &s2);

    struct zaman z1 = yenizaman(h, m, s, s2);
    printf("%02d:%02d:%02d", z1.saat, z1.dakika, z1.saniye);

    return 0;
}
*/
