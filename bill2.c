#include<stdio.h>
 struct bill{
    int productno;
    char name[50];
   float rate,qty,amt,dis,billant,gst,netbill;
};
   int main()
{
    struct bill a[10];
    int i;
   for(i=0;i<2;i++){
     printf("enter productno:");
     scanf("%f",&a[i].productno);
     printf("enter name:");
     scanf("%s",&a[i].name);
     printf("enter rate:");
     scanf("%f",&a[i].rate);
     printf("enter qty:");
     scanf("%f",&a[i].qty);
}
  printf("productno\tname\trate\tqty\tamt\tdis\tbillant\tgst\tnetbill");
   for(i=0;i<2;i++)
  {
        a[i].amt=a[i].qty*a[i].rate;
        a[i].dis=(a[i].amt*5)/100;
        a[i].billant=a[i].amt-a[i].dis;
        a[i].gst=(a[i].netbill*18)/100;
        a[i].netbill=a[i].billant+a[i].gst;       
    printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",a[i].productno,a[i].name,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billant,a[i].gst,a[i].netbill);
 }
}
