#include <stdio.h>
#include<string.h>
int main()
{
       char r[30];
   int a[30], l, i, x;
   scanf("%s", r);
   l =strlen(r);
   for(i = 0; i < l; i++)
   {
      switch (r[i])
      {
     case 'I':  
     a[i] = 1;
        break;
     case 'V':  
     a[i] = 5;
          break;
     case 'X':  
     a[i] = 10;
           break;
     case 'L':  
     a[i] = 50;
            break;
     case 'C':  
     a[i] = 100;
            break;
     case 'D':  
     a[i]=500;
            break;
     case 'M':  a[i] = 1000;
            break;
   }
   }
   x = a[l - 1];
   for(i = l - 1; i > 0; i--)
   {
      if(a[i] > a[i - 1])
      {
     x = x - a[i - 1];
      }
      if(a[i] <= a[i - 1])
      {
     x = x + a[i - 1];
      }
   }
   printf("%d", x);
    return 0;
}
