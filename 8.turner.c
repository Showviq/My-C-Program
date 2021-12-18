#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
int main(void)
{
    int h,m;
    char ch;
    printf("Enter a 12 hour time: ");
    scanf("%d : %d %c",&h,&m,&ch);
    if(h == 12 && ch == 'P')
    {
        printf("Equivalent 24-hour time: 12 : %d",m);
    }
    else if (ch == 'A' && h!=12)
    {
        printf("Equivalent 24-hour time: %d : %d",h,m);
    }
    else if (ch == 'A' && h == 12)
    {
        printf("Equivalent 24-hour time: 00 : %.02d",m);
    }
    else if (ch == 'P' && h!=12)
    {
        printf("Equivalent 24-hour time: %d : %d",h+12,m);
    }
    return 0;
}
