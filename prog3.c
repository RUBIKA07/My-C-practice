 #include <stdio.h>
 int main()
{
 int a,b,dis;
 printf("enter the price :");
 scanf("%d",&a);
 printf("enter the discount:");
 scanf("%d",&b);
 printf("%d\n",(a*b)/100);
 dis =(a*b)/100;
 printf("%d",a-dis);

 return 0;
 }
 
