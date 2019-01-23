#include<stdio.h>

int main() {
   int a,i;
   char b[100];
   scanf("%s",&b);
   for(i=0;b[i]!='\0';i++);
   a=i;
   for(i=a-1;i>=0;i--)
   printf("%c",b[i]);
}
