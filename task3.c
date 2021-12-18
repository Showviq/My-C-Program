
#include <stdio.h>
int main(){
    //VARIABLE DECLARATION
    int arr[10];
    int n, r, i;
    while(1){
        //INITIALIZATION WITH 0
        for (i = 0; i < 10; i++)
            arr[i] = 0;

        //INPUT & CHECK
        scanf("%d", &n);
        if (n <= 0)
            return;

        //MAIN WORK
        while (n != 0){
            r = n%10;
            arr[r]++;
            n/=10;
        }

        //OUTPUT
        printf("Digits:     ");
        for (i = 0; i<10; i++)
            printf("%2d", i);
        printf("\nOccurences: ");
        for (i = 0; i<10; i++)
            printf("%2d", arr[i]);
        printf("\n");
    }

}
