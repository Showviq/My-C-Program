#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>

int main(void)
{
    double a,b,x,y;
    scanf("%lf",&x);
    a=(x/y);
    y=1;
    b=((a+y)/2);
    while(1)
        {
            a=(x/y);
            b=(y+a)/2;
            if(b==y)
                break;
            y=b;
        }
    printf("The root of %.0f via Newton's method is %.5f\n",x,y);
    return 0;
}
