#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   FILE *f1;
   char buf[5][100];
   f1=fopen("final2.txt","w");
   fputs("bu dosya final içiv\nmain.c",f1);
   fclose(f1);
    return 0;
}
