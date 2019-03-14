#include<stdio.h>
int main ()
{
int i,j,k,a[100],b[100],c,t,d,l=0;
scanf("%d",&c);  //printf("%d\t",c);
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);  //printf("%d",a[i]);
}
k=0;
for(i=0;i<c;i++)
{d=0;
for(j=i+1;j<c;j++)
{
   // printf("%d",j);
    if(a[i]!=0)
    {
        if(a[i]==a[j])
        {
            d=1;
            a[j]=0;
        }
    }
}
// printf("\t%d,%d",a[i],d);
if(d==1)
{
    l++;
b[k]=a[i];// printf("\n%d",b[k]);
k++;
}
}
b[k]='\0';
if(l==0)
{
    printf("unique");
}
for(i=0;i<k;i++)
{
for(j=0;j<k;j++)
{
if(b[i]<b[j])
{
t=b[j];
b[j]=b[i];
b[i]=t;
}
}
}
for(i=0;i<k;i++)
{
    printf("%d\t",b[i]);
}
}
