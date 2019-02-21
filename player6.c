#include<stdio.h>

int main() {
    int b, i;
  char a[1000000],temp;
  scanf("%s",a);
  for(b=0;a[b]!='\0';b++);
  for(i=0;i<b;i=i+2)
{
   temp=a[i];
   a[i]=a[i+1];
   a[i+1]=temp;
}
  printf("%s",a);
}
