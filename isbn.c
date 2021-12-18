#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    a=978 || 979;
    printf("Enter ISBN:\n");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
    printf("GS1 prefix: %d\n",a);
    printf("Group Identifier: %d\n",b);
    printf("Publisher code: %d\n",c);
    printf("Item number: %d\n",d);
    printf("Check digit: %d",e);

    return 0;
}
