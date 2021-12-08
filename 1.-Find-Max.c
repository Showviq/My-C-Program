#include <stdio.h>

int main(){
    float n, max = 0;
    while (1){
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n <= 0)
            break;

        if (n > max)
            max = n;
    }

    printf("The largest number entered was %.2f\n", max);

    return 0;
}
