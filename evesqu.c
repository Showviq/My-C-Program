#include<stdio.h>
#include<math.h>
main()
{
 int n,i;

 scanf("%d", &n);

 for(i=2;i*i<=n;i=i+2)

printf("%d \n",(i*i));
}
