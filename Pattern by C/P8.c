#include<stdio.h>

int main()
{
    int n,r,c;

    printf("Enter N = " );
    scanf("%d", &n);

    for(r=n; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        {
            printf("% 0d", c);
        }
        printf("\n");
    }
}

