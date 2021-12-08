#include <stdio.h>
#include <stdlib.h>

int main()
{
    float loan,rate,pay;
    int a;
    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    rate=rate/1200;
    a=0;
    while(1)
    {printf("Enter monthly payment: ");
    scanf("%f",&pay);
    if(pay<=0)
    {
        printf("End of Program!!");
        break;
    }
    loan = loan - pay + (loan*rate);
    a++;
    printf("Balance remaining after payment %d: $%.2f\n",a,loan);

    }
    return 0;
}
