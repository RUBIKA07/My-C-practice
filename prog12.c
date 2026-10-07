#include <stdio.h>
int main ()
{
  int a,b,c,adult,child,weight;
  
  printf("enter the weight of the boat:");
  printf("enter the no of adult:");
  printf("enter the no of child:");
  scanf("%d%d%d",&a,&b,&c);
  printf ("%d%d%d",a,b,c);
  
  a=adult*75;
  b=child*50;
  c=a+b;
   if(weight>=c)
   {
   printf("boat is stable:");
   }
   else 
   {
   printf("boat will drown :");
   }
   return 0;
   } 
