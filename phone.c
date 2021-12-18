#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter phone number:\n");
    scanf("(%d)%d-%d",&a,&b,&c);
    printf("You entered %d.%d.%d",a,b,c);
    return 0;
}

