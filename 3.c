#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,odd,max;
    float average,sum,a;

    printf("Please enter each number one by one\nEnter 0 or a Negative number to end program\n\n");
    number=1;
    a=-1;
    odd=0;
    max=0;
    sum=0;
    while(number>0)
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        a=a+1;
        sum=sum+number;
        if(number%2!=0)
            {
                odd++;
            }
        if(max<number)
        {
            max=number;
        }
    }
    average = sum / a ;
    printf("The number of inputs is %.0f\n",a);
    printf("The sum of the input values is %.0f\n",sum);
    printf("The average of the input values is %.2f\n",average);
    printf("The number of odd values input is %d\n",odd);
    printf("The maximum value entered was %d\n",max);
    return 0;
}
