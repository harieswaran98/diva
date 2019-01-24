#include<stdio.h>

int main() {
   int x,a,b,c,f=0,g=0;
   char h[100],j[100];
  scanf("%s",h);
  scanf("%s",j);
  for(a=0;h[a]!='\0';a++);
  x=a;
  for(a=0;j[a]!='\0';a++);
  b=a;
  if(x==b)
  {  for(a=0;a<x;a++)
  {
      for(c=a+1;c<x;c++)
      {
          if(h[a]==h[c])
          {
              if(j[a]==j[c])
              f++;
              g++;
        
          }
      }
  }
  for(a=0;a<x;a++)
  {
      for(c=a+1;c<x;c++)
      {
          if(j[a]==j[c])
          {
              if(h[a]==h[c])
              f++;
              g++;
        
          }
      }
  }
 
   
  if(f==g)
  printf("yes");
  else
  printf("no");
  }
   else
   printf("no");
  
}
