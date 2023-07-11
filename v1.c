#include<stdio.h>
 int main()
{
    int l,m,*p,*q;
     printf("enter a l value");
     scanf("%d",&l);
     printf("enter a m value");
     scanf("%d",&m);
      p=&l;
      q=&m;
      *p=*p+*q;
      *q=*p-*q;
      *p=*p-*q;
    printf("l value is %d",*p);
    printf("\nm value is %d",*q);
}

    