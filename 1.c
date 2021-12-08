#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,remain,a;
    scanf("%d",&number);
    do {
            remain=number%10;
            a=a*10+remain;
            number=number/10;
       }
        while (number);
    printf("%d",a);


    return 0;
}
