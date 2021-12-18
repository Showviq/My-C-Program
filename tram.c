#include<stdio.h>
int main()
{
    int i,n,a,b,p=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        p=b-a+p;
        if(max<p)
            max=p;
    }
printf("%d",max);
return 0;
}

