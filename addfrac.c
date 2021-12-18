#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&a,&b,&c,&d);

    e = a*d + b*c ;
    f = b*d ;

    printf("The sum is %d/%d\n",e,f);
    return 0;
}
