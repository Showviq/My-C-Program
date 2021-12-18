#include<stdio.h>
int main()
{
    int totalRowNo, row, space, sign;
    printf("Enter the number of rows\n");
    scanf("%d",&totalRowNo);

    for(row=1; row<= totalRowNo; row++)
    {
        //print the spaces
        for(space=1; space<= (totalRowNo-row); space++)
            printf(" ");

        //print the sign
        for(sign=1; sign<=((2*row)-1); sign++)
            printf("*");

        printf("\n");
    }
    return 0;
}
