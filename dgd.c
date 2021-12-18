
#include<stdio.h>
#include<ctype.h>
int main()
{
    double n,s;
    char ch;

    printf("Enter an expression: ");
    scanf("%lf", &s);


        while(1)
        {


          ch=getchar();

          if(ch== '+')
          {
              scanf("%lf", &n);
              s=s+n;
          }

          if(ch== '-')
          {
              scanf("%lf", &n);
              s=s-n;
          }

          if(ch== '*')
          {
              scanf("%lf", &n);
              s=s*n;
          }

          if(ch== '/')
          {
              scanf("%lf", &n);
              s=s/n;
          }


          if(ch== '\n')
          {
              break;
          }


        }


    printf("Value of expression: %lf", s);
    return 0;
}
