#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
      char x[100],y[100];

      printf("Enter a first and second name: ");

      scanf(" %s %s", x, y);
      printf("%s, %c.", y, x[0]);

    return 0;
}
