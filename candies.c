#include<stdio.h>
int main()
{
   int t,i,s;
   long long int n;

   scanf("%d", &t);

   for(i=0 ; i<t ; i++)
   {
     scanf("%lld", &n);

     if(n<3)
       {
        printf("%d\n", 0);
       }

     if(n>=3 && (n%2)!=0)
       {
        s=(n/2);
        printf("%d\n", s);
       }

      if(n>=3 && n%2==0)
       {
        s=(n/2)-1;
        printf("%d\n", s);
       }

   }

  return 0;

}

