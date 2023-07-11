#include<stdio.h>
int main()
{
   FILE *fp;
   fp=fopen("manasvi.txt","w+");
   fprintf(fp,"welcome to skill qode-decode your skill here....\n");
   fputs("you are entering to lerning c language now....\n",fp);
   fputs("we are enjoying every where....",fp);
   fclose(fp);
}                            