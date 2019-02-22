#include<stdio.h>

int main() {
   int a,b,c=0,d=0,i,j;
   scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++)
   {
       c=0;
       if(i==2)
       {
           d++;    // printf("%d\t",d);
           
       }
       else
       {
       for(j=i-1;j>=2;j--)
       {
           if(i%j==0)
           {
               c=1;  //printf("%d\t%d\t",i,c) ;
           }
       }
       if(c!=1)
       {
           d++;
       }
       }
   }
   printf("%d",d);
   
}
