#include<stdio.h>
int main()
{
 int i,j,c,b,d=0,e=0,f=0,g;
 char a[20];

 scanf("%s",&a);
 for(i=0;a[i]!='\0';i++);
 b=i;
 if((a[0]=='I')&&(a[1]=='V'))
  printf("4");
 else if((a[0]=='I')&&(a[1]=='X'))
  printf("9");
 else if((a[1]=='I')&&(a[2]=='V'))
  printf("14");
 else if((a[1]=='I')&&(a[2]=='X'))
  printf("19");
 else
 {
 for(i=0;i<b;i++)
 {c=1;
  for(j=i+1;j<b;j++)
  {
   if(a[i]==a[j])
   {
    c++;
    a[j]='\0';
   }
  }
   if(a[i]=='I')
    d=1*c;
   if(a[i]=='V')
    e=5*c;
   if(a[i]=='X')
    f=10*c;
}
 g=d+e+f;
 printf("%d",g);
}
  
 }
