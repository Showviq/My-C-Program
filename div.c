#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);


        int a,b,x;

        for (int i=0; i<t; i++)
{
    scanf("%d%d",&a,&b);
    x=a%b;


            if(x==0)
            {
            printf("%d\n",x);
            }
            else
            {
                printf("%d\n",b-x);
            }
}
return 0;
}
