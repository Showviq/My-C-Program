#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int h1, h2, l1, l2, h, l;
    if (a > b){
        h1 = a;
        l1 = b;
    }
    else{
        h1 = b;
        l1 = a;
    }

    if (c > d){
        h2 = c;
        l2 = d;
    }
    else{
        h2 = d;
        l2 = c;
    }

    if (h1 > h2)
        h = h1;
    else
        h = h2;

    if (l1 < l2)
        l = l1;
    else
        l = l2;

    printf("Largest: %d\nSmallest: %d\n", h, l);
    return 0;
}
