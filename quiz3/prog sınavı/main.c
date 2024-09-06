#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fonk(int*po)
{*(po)=-1;
po++;
*(po)=-2;}

int main() {
 int dizi[6]={1,2,3,4,5,6};
 char *p;
 p=dizi;
 p=p+4;
 fonk(p);
 for(int i=0;i<6;i++)
 {
     printf("%d",dizi[i]);

 }

   return 0;
}

