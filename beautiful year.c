#include<stdio.h>
int main()
{
    int y,a,b,c,d,ans;
    scanf("%d", &y);
    while(1)
    {
        y++;
        ans=y;
        a=y%10;
        y=y/10;
        b=y%10;
        y=y/10;
        c=y%10;
        y=y/10;
        d=y%10;
        y=y/10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            printf("%d",ans);
            break;
        }

        y=ans;
    }

}
