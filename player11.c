#include<stdio.h>

int main() {
   int a,b,i,j,g=0,h=0;
   char c[200],d[200];
   scanf("%s",&c);
   for(a=0;c[a]!='\0';a++);
  
  //printf("%d",a);
  char e[]={'s','a','t','u','r','d','a','y'},f[]={'s','u','n','d','a','y'};
  for(i=0;i<a;i++)
    {
        if(c[i]==e[i])
        g++;
        if(c[i]==f[i])
        h++;
    }
   // printf("%d",h);
        if(g==a||h==a)
        {
    printf("yes");
    }
    else
    {
        printf("no");
        }
}
