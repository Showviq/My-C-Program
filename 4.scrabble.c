#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    char a[100];
    int i,sum;
    printf("Enter a word: ");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]>=97 && a[i]<=122)
            a[i]=a[i]-32;
    }
    sum=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='L' || a[i]=='N' || a[i]=='O' || a[i]=='R' || a[i]=='S' || a[i]=='T' || a[i]=='U')
            sum=sum+1;
        else if(a[i]=='D' || a[i]=='G')
            sum=sum+2;
        else if(a[i]=='B' || a[i]=='C' || a[i]=='M' || a[i]=='P')
            sum=sum+3;
        else if(a[i]=='F' || a[i]=='H' || a[i]=='V' || a[i]=='W' || a[i]=='Y')
            sum=sum+4;
        else if(a[i]=='K')
            sum=sum+5;
        else if(a[i]=='J' || a[i]=='X')
            sum=sum+8;
        else(a[i]=='Q' || a[i]=='Z');
            sum=sum+10;
    }
    printf("Scrabble value: %d\n",sum-i*10);
    return 0;
}

