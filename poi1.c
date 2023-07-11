#include<stdio.h>
 int main()
{
     int a=10,*p,**q;
     p=&a;
     q=&p;
   printf("value of a is :%d",a);
   printf("\naddress of a is :%u",&a);
   printf("\naddress of a using p is:%d",p);
   printf("\naddress of p is :%u",&p);
   printf("\nvalue of a using p is :%d",*p);
   printf("\nvalue of a using q is :%d",**q);
}