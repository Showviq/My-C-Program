#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    int a,b,c,d,x,y;
    char i;
    printf("Enter two fractions separated by a (+ or - or * or /) sign: ");
    scanf("%d/%d %c %d/%d",&a,&b,&i,&c,&d);
    if(i=='+')
    {
        x=a*d+c*b;
        y=b*d;
        printf("The sum is %d/%d",x,y);
    }
    if(i=='-')
    {
        x=a*d-c*b;
        y=b*d;
        printf("The difference is %d/%d",x,y);
    }
    if(i=='*')
    {
        x=a*c;
        y=b*d;
        printf("The product is %d/%d",x,y);
    }
    if(i=='/')
    {
        x=a*d;
        y=b*c;
        printf("The quotient is %d/%d",x,y);
    }
    return 0;
}

