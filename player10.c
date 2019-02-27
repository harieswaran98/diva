#include<stdio.h>

int main() {
   int a,b,i,j,g=0;
   char c[200],d[200];
   scanf("%s",&c);
   for(a=0;c[a]!='\0';a++);
   scanf("%s",&d);
  // printf("%d",a);
   for(b=0;d[b]!='\0';b++);
   if(a==b)
   {
   for(i=0;i<=a;i++);
   {
     //  printf("%d",g);

   if(c[i]!=d[i])
    {
        g=g+1;    // printf("%d",g);
     }
       
   }
  // printf("%d",g);
   if(g==1)
   {
     printf("yes");  
   }
   else
   {
       printf("no");
   }
   }
   else
   printf("no");
}
