#include <stdio.h>

int main(){
    int hour, min;
    scanf("%d:%d",&hour,&min);

    if (hour > 12){
        hour -= 12; // hour = hour - 12
        printf("%02d:%02d PM", hour, min);
    }
    else{
        printf("%02d:%02d AM", hour, min);
    }
    return 0;
}
