#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    switch (n){
        case 90 ... 100:
            printf("A");
            break;
        case 80 ... 89:
            printf("B");
            break;
        case 70 ... 79:
            printf("C");
            break;
        case 60 ... 69:
            printf("D");
            break;
        case 0 ... 59:
            printf("F");
            break;
        default:
            printf("Error");
            break;
    }

    return 0;
}
