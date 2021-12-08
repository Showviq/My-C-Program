#include <stdio.h>

int main(){
    int shares, price;
    float first, second;

    scanf("%d%d", &shares, &price);
    if (price < 39)
        first = 0;
    else if (price < 2500)
        first = 30 + (1.7*price/100);
    else if (price < 6250)
        first = 56 + (0.66*price/100);
    else if (price < 20000)
        first = 76 + (0.34*price/100);
    else if (price < 50000)
        first = 100 + (0.22*price/100);


    if (shares < 2000)
        second = 33 + (3.0*shares/100);
    else
        second = 33 + (2.0*shares/100);

    printf("First Broker %f\n", first * shares);
    printf("Second Broker %f\n", second * shares);
    return 0;
}
