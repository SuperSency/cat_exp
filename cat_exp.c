#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cp_file(FILE *src,FILE *dest)
{
   int c;
   while((c=getc(src))!=EOF)
   {
     putc(c,dest);
   }
}

int main(int argc,char *argv[])
{
   FILE *fp;
   if(argc!=2)
   {
     printf("Wrong Format!\n");
     exit(EXIT_FAILURE); 
   }
   if((fp=fopen(argv[1],"r"))==NULL)
   {
     perror("OPEN");
     exit(EXIT_FAILURE);
   }
   cp_file(fp,stdout);
   fclose(fp);
   return 0;
}
