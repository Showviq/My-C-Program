#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
int main(void)
{
    double n,c;
    char ch;

    printf("Enter an expression: ");
    scanf("%lf", &c);


        while(1)
        {

        ch=getchar();

          if(ch== '+')
          {
              scanf("%lf", &n);
              c=c+n;
          }

          else if(ch== '-')
          {
              scanf("%lf", &n);
              c=c-n;
          }

          else if(ch== '*')
          {
              scanf("%lf", &n);
              c=c*n;
          }

          else if(ch== '/')
          {
              scanf("%lf", &n);
              c=c/n;
          }


          if(ch== '\n')
          {
              break;
          }


        }


    printf("Value of expression: %.02f", c);
    return 0;
}
