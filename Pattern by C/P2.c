#include<stdio.h>

int main()
{
    int n,r,c;

    printf("Enter N = " );
    scanf("%d", &n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("% 3d", r);
        }
        printf("\n");
    }
}

