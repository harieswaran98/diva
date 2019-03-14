#include<stdio.h>

int main() {
   int a[100],b,c,i,j,k;
   scanf("%d",&b);
   for(i=0;i<b;i++)
   {
       scanf("%d",&a[i]);
   }
  // c=i-1;
   for(i=0;i<b;i++)
   {
       for(j=i+1;j<b;j++)
       {
         for(k=j+1;k<b;k++) 
         {
             if((a[i]+a[j])==a[k])
             {
                 printf("%d\t%d\t%d\n",a[i],a[j],a[k]);
             }
         }
       }
   }
}
