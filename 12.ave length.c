#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    float s,i=-1,w=1;
    char ch;

    printf("Enter a sentence:");

    while(1)
    {
      scanf("%c", &ch);
      if(ch != ' ')
      {
          i++;
      }

      if(ch == ' ')
      {
          w++;
      }

      if(ch== '\n')
        break;
    }
    printf("Average word length: %.1f", i/w);

    return 0;
}

