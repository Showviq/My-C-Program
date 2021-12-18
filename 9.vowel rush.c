#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
int main(void)
{
    int v=0;
    char ch;

    while(1)
    {
        scanf("%c", &ch);
        ch=toupper(ch);

        if(ch== '\n')
            break;

        if(ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U')
        {
            v++;
        }

    }
     printf("Your sentence contains %d vowels", v);

     return 0;

}
