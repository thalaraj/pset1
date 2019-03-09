#include <stdio.h>
#include<string.h>

int main()
{
  char a[100],b[100];
  int c,d,i,j,k=0,l=0,m=0;
  scanf("%s",a);
  scanf("%s",b);
  c=strlen(a);
  d=strlen(b);
  if(c==d)
  {
  for(i=1;i<=c;i++)
  {
    for(j=i;j<=1;j++)
    {
      if(a[i]==a[j])
      {
        k++;
      }
      if(b[i]==b[j])
      {
        l++;
      }
      if(k==l)
      {
        m=1;
      }
      else
      {
        m=0;
      }
    }
   }
   if(m==1)
   printf("yes");
   else
   printf("no");
  }
  return 0;
}
