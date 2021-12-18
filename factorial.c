#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

int main(void)
{
    int n,i;
    int fact;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%lf\n",fact);
    return main();
}
