#include<stdio.h>

int main()

{
    int n,r,c;
    printf ("Enter N = ");
    scanf ("%d",&n);
    printf("\n");

    for (r=1 ; r<=n ; r++)
    {
        for (c=1 ; c<=n ; c++)
        {
            printf ("%2d",c);
        }

        printf("\n");
    }
}
