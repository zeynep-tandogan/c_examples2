#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tarih{

int gun;
int ay;
int yil;
};
struct tarih buyukolanibul(struct tarih t1,struct tarih t2)
{
   /*if( memcmp(&t1,&t2,sizeof(struct tarih))>0)
    return t1;
   else
    return t2; hata verebiliyo*/
    if (t1.yil > t2.yil)
        return t1;
    else if (t1.yil < t2.yil)
        return t2;
    else {
        if (t1.ay > t2.ay)
            return t1;
        else if (t1.ay < t2.ay)
            return t2;
        else {
            if (t1.gun > t2.gun)
                return t1;
            else
                return t2;
        }
    }


};

int main()
{
    struct tarih temp,t1,t2;
    printf("1. tarihi girniz:");
    scanf("%d/%d/%d",&t1.gun,&t1.ay,&t1.yil);
    printf("2. tarihi girniz:");
    scanf("%d/%d/%d",&t2.gun,&t2.ay,&t2.yil);
    temp=buyukolanibul(t1,t2);
    printf("girilen tarihlerden ileri olan tarih:%d/%d/%d",temp.gun,temp.ay,temp.yil);
    return 0;
}
