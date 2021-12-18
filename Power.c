#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    pow(a,b)-pow(b,a);
    printf("%.0f",pow(a,b)-pow(b,a));
    return 0;
}
