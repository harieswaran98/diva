#include<stdio.h>

int main() {
   int a,sum=1;
  
   scanf("%d",&a);
   while(a)
   {
       sum=a%10;
       printf("%d",sum);
      a=a/10;
   }
   
}
