#include<stdio.h>
int main()
{
    long long k,w,n,total;
    scanf("%lld%lld%lld",&k,&n,&w);
    total=(w*(k+w*k))/2;
    if(total>n)
        printf("%lld",total-n);
    else
        printf("0");
    return 0;
}
