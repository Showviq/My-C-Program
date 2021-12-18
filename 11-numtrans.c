#include <stdio.h>

int main(){
    int n;
    int a, b;
    scanf("%d", &n);
    a = n/10;
    b = n%10;

    char s1[10] = "Twenty", s2[10];
    switch(a){
        case 2:
        s1 = "Twenty";
        break;
    }

    printf("%s-%s/n", s1, s2);
    return 0;
}
