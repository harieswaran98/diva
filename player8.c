#include<stdio.h>

int main() {
    int b, i;
  char a[1000000];
  scanf("%[^/n]s",a);
  for(b=0;a[b]!='\0';b++);
  
   if(a[0]>=97)
   {
       a[i]=a[i]-32;
    }
        for(i=1;i<b;i++)
        {
         if(a[i]==' ')
         {
             if(a[i+1]>=97)
             {
                a[i+1]= a[i+1]-32;
                i++;
             }
         }
         else
       {
        if(a[i]<=90)
        {
          a[i]=a[i]+32;  
        }
         }
    }
for(i=0;i<b-1;i++)
{
  printf("%c",a[i]);
}
}
