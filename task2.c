#include<stdio.h>
int main()
{
    int arr[10];
    int n, r, i;
    for (i = 0; i <10; i++)
        arr[i] = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        r = n %10;
        arr[r] ++;
        n/=10;
    }
    for (i = 0; i<10; i++)
    {
        if (arr[i] >= 2)
            printf("%d was repeated\n", i);
    }
}
