 #include <stdio.h>
 int main()
 {
 int a,b,tax;
 printf("enter the amount:");
 scanf("%d",&a);
 printf("enter  the tax percentage :");
 scanf("%d",&b);
 tax=a*b/100;
 printf("%d",tax+a);
 return 0;
 }
