#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//220201005_zeynep tandogan


void siralama(int k,int dizi3[k])
{
    for(int i=0;i<k-1;i++)
    {
        for(int j=1;j<k;j++)
        {
            if(dizi3[j]<dizi3[i])
            {
                int deg;
                dizi3[i]=deg;
                dizi3[i]=dizi3[j];
                dizi3[j]=deg;
            }
        }
    }
    for(int i=0;i<k;i++){
         printf("\n%d ",dizi3[k]);
    }

}



void boyut_bulma( int n1,int n2,int dizi1[n1],int dizi2[n2])
{

    int k=n1+n2;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(dizi1[i]==dizi2[j])
                k--;
        }
    }
int dizi3[k];
    for( int i=0;i<n1;i++)
    {
        dizi3[i]=dizi1[i];
    }
    for(int j=0;j<n2;j++)
    {
        for(int k=0;k<n1;k++)
        {
            if(dizi3[k]!=dizi2[j])
            {
                 dizi3[n1]=dizi2[j];
        n1++;

            }

        }

    }
    printf("3. dizi:\n");
    {
        for(int i=0;i<k;i++)
        {
            printf("%d ",dizi3[k]);
        }
    }
    siralama(k,dizi3[k]);

}

int main()
{
    int n1,n2,k;

    printf("1.dizinin boyutunu giriniz: ");
    scanf("%d",&n1);
    int dizi1[n1];
    printf("1. dizide bulunucak sayýlari giriniz:\n");
    for(int i=0;i<n1;i++)
    {
        x:
        scanf("%d",&dizi1[i]);
        for(int j=0;j<i;j++&&j!=i)
        {
            if(dizi1[i]==dizi1[j])
               {
                   goto x;
                i--;
               }
        }

    }
    printf("1. dizi:\n");
    for(int i=0;i<n1;i++)
    {
        printf("%d ",dizi1[i]);
    }


    printf("\n");
    printf("2.dizinin boyutunu giriniz: ");
    scanf("%d",&n2);
    int dizi2[n2];
    printf("2. dizide bulunucak sayýlari giriniz:\n");
    for(int i=0;i<n2;i++)
    {
        y:
        scanf("%d",&dizi2[i]);
        for(int j=0;j<i;j++&&j!=i)
        {
            if(dizi2[i]==dizi2[j])
               {
                   goto y;
                i--;
               }
        }

    }
    printf("2. dizi:\n");
    for(int i=0;i<n2;i++)
    {
        printf("%d ",dizi2[i]);
    }
    boyut_bulma(n1,n2,dizi1[n1],dizi2[n2]);




    return 0;
}
