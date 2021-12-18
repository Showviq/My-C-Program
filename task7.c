#include <stdio.h>
#include<ctype.h>
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        printf("Enter row %d : ",i+1);
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("\n");
    int rsum=0;
    printf("Row totals : ");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            rsum=rsum+a[i][j];
        }

        printf("%d ",rsum);
        rsum=0;
    }
    printf("\n");
    printf("Column totals : ");
    int csum=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            csum=csum+a[j][i];
        }

        printf("%d ",csum);
        csum=0;
    }
    return 0;
}
