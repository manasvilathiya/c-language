#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   int i;
   for(ch='a';ch<='e';ch++)
  {
   for(i=1;i<=5;i++)
  {
    printf("\t%c",ch);
  }
    printf("\n");
 }
   getch();
}