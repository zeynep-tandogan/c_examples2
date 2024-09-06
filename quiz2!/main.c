#include <stdio.h>
#include <stdlib.h>
//220201005_zeynep tandoðan
 void tek_cift(int boyut,int matris1[boyut][boyut])
 {
     int t=0,c=0,tek[t],cift[c],k=0;
     for(int i=0;i<boyut;i++)
     {
         for(int j=0;j<boyut;j++)
         {
            if (matris1[i][j]%2==0)
            {
                cift[c]=matris1[i][j];
                c++;
            }
            else
            {
                tek[t]=matris1[i][j];
                t++;
            }
         }
     }
     while(k<c-1)
     {
         printf("cift sayilar:(%d tane) ",c);
         printf("%d, ",cift[k]);
         k++;
     }
     while(k<t-1)
     {
         printf("tek sayilar:(%d tane) ",t);
         printf("%d, ",tek[k]);
         k++;
     }
 }
int main()
{
    //boyut alma
    int boyut;
    printf("matris boyutu girin(en az 2): ");
    do
    {
        scanf("%d",&boyut);
    }while(boyut<2);
//matris degerleri alma
int matris[boyut][boyut];
int matris1[boyut][boyut];

printf("\nmatris degerlerini giriniz:\n");
for(int i=0;i<boyut;i++)
{
    for(int j=0;j<boyut;j++)
    {
       scanf("%d",&matris[i][j]);
    }
}
//matris carpým bulma
int kosecarpim=matris[0][0]*matris[boyut-1][boyut-1]*matris[0][boyut-1]*matris[boyut-1][0];
printf("kose degerler carpýmý:\n");
printf("%d x %d x %d x %d= %d",matris[0][0],matris[boyut-1][boyut-1],matris[0][boyut-1],matris[boyut-1][0],kosecarpim);

 //yeni matris bulma
 for(int i=0;i<boyut;i++)
 {
     for(int j=0;j<boyut;j++)
     {
         if(kosecarpim-matris[i][j]>0)
         {
             matris1[i][j]=kosecarpim-matris[i][j];
         }
         else
            matris1[i][j]=matris[i][j];
     }
 }

 //yeni matrisi yazdýrma
 printf("\nyeni matris:\n");
 for(int i=0;i<boyut;i++)
 {
     for(int j=0;j<boyut;j++)
     {
         printf("%d\t",matris1[i][j]);
     }
     printf("\n");
 }
 tek_cift(boyut,matris1);

    return 0;
}
