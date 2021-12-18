#include <stdio.h>
main()
{
    int num,odd,max;
    float ave,sum,a;

    printf("Please enter number one by one\nEnter 0 or a Negative number to end program\n");
    num=1;
    a=-1;
    odd=0;
    max=0;
    sum=0;
    while(num>0)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        a=a+1;
        sum=sum+num;
        if(num%2!=0)
            {
                odd++;
            }
        if(max<num)
        {
            max=num;
        }
    }
    ave = sum / a ;
    printf("The number of inputs is %.0f\n",a);
    printf("The sum of the input values is %.0f\n",sum);
    printf("The average of the input values is %.2f\n",ave);
    printf("The number of odd values input is %d\n",odd);
    printf("The maximum value entered was %d\n",max);
    return 0;
}
