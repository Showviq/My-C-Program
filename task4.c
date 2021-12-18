#include <stdio.h>
#define asize (int) (sizeof(a) / sizeof(a[0]))

int main()
{

    int i;
    int a[10],n;

    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        a[i]=n;
    }
    printf("In reverse order : ");
    for (i=asize-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
