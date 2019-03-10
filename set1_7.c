#include <stdio.h>
#include <string.h>

int main() 
{
char a[100],b[100];
int i,l,k;
scanf("%s",a);
l=strlen(a);
for(i=1;i<=l;i++)
{
  if(i%2==0)
  {
    k=a[i];
    a[i]=a[i+1];
    a[i+1]=k;
  }
}
printf("%s",a);
return 0;
}
