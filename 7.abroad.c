#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    int a, b, n;
    char ch;
    scanf("%d:%d %c", &a, &b, &ch);
    ch = toupper(ch);
    if (ch == 'P')
        {
        a+=12;
        }
        n = a*60 + b;

    printf("Closest departure time is ");

    switch (n){
        case 0 ... 411:
        printf("8:00 a.m., arriving at 10:16 a.m.");
        break;

        case 412 ... 631:
        printf("9:43 a.m., arriving at 11:52 a.m.");
        break;

        case 632 ... 723:
        printf("11:19 a.m., arriving at 1:31 p.m.");
        break;

        case 724 ... 803:
            printf("12:47 p.m., arriving at 3:00 p.m.");
        break;

        case 804 ... 892:
            printf("2:00 p.m., arriving at 4:08 p.m.");
        break;

        case 893 ... 1040:
            printf("3:45 p.m., arriving at 5:55 p.m.");
        break;

        case 1041 ... 1222:
            printf("7:00 p.m., arriving at 9:20 p.m.");
        break;

        case 1223 ... 1972:
            printf("9:45 p.m., arriving at 11:58 p.m.");
        break;

        default:
        printf("8:00 a.m., arriving at 10:16 a.m.");
        break;
    }
    return 0;
}

