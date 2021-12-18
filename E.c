#include<stdio.h>
int main()
{
    int n, fact = 1;
    float s, tmp;
    scanf("%d%f", &n, &s);

    float e = 1;
    for (int i = 1; i < n; i++){
        fact *= i;
        tmp = 1.0/fact;
        if (tmp < s)
            break;
        e += tmp;
    }

    printf("%f", e);
    return 0;
}
