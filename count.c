#include <stdio.h>

int main(){
    int n, res;
    scanf("%d", &n);
    if (n < 10)
        res = 1;
    else if (n < 100)
        res = 2;
    else if (n < 1000)
        res = 3;
    else if (n < 10000)
        res = 4;

    printf("This number has %d digits\n", res);

    return 0;
}
