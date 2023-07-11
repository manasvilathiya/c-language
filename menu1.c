#include<stdio.h>
int main()
{
    int  a,b,ch;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    printf("1. add");
    printf("\n2.sub");
    printf("\n 3.product");
    printf("\n 4. division");
    printf("\n enetr your choice:");
    scanf("%d",&ch);
    switch(ch) 
     {
     case 1:
        printf("addition is:%d\n",a+b);
        break;
     case 2:
   	printf("substraction is:%d\n",a-b);
        break;
      case 3:
    	printf("product is:%d\n",a*b);
        break;
      case 4:
	printf("division is:%d\n",a/b);
        break;
       default:
        printf("wrong choice\n");
        break;
     }
}