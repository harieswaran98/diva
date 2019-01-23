#include<stdio.h>

int main() {
   int a,sum=1;
  
   scanf("%d",&a);
   while(a)
   {
       sum=sum*a;
       a--;
   }
   printf("%d",sum);
}
