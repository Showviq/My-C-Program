#include<stdio.h>
int main()
{
  int n,i,element;

  scanf("%d", &n);

  int friends[100];

  for(i=1 ; i<=n ; i++)
    {
      scanf("%d", &element );
      friends[element] = i ;
    }

   for(i=1 ; i<=n ; i++)
      {
        printf("%d ", friends[i]);
      }



  return 0;
}
