#include<stdio.h>

int main()

{
    int n,r,c;
    printf ("Enter N =");
    scanf ("%d",&n);

    for (r=n ; r>=1 ; r--)
    {
        for (c=1 ; c<=n-r ; c++)
        {
            printf (" ");
        }


        for (c=1 ; c<=r ; c++)
        {

            printf ("%01d",c);
        }
        printf("\n");
    }
}


