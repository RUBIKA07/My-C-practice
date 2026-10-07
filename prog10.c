#include <stdio.h>
int main ()
{
int a,b;
scanf("%d%d",&a,&b);

printf("%d%d\n",a,b);
printf("%d\n",a=a+b);
printf("%d",b=a-b);
printf("%d",a=a-b);
return 0;
}
