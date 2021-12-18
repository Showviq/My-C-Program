#include <stdio.h>


int main(){
    int i, j, n, count;

    printf("Enter Dimension: ");
    scanf("%d", &n);

    int mat[n][n];  //TWO DIMENSIONAL ARRAY

    //INITIALIZATION
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            mat[i][j] = 0;

    i = 0; j = n/2; count = 1;  // I is row, J is column
    while (count <= n*n){

        if (mat[i][j] == 0) //Check if current square is occupied, if not then place the number
            mat[i][j] = count;
        else{
            i++; j--; //Since this place is already occupied let's go back to the previous square

            /*FOR BOUND CHECK*/
            if (i == n)
                i = 0;
            if (j == -1)
                j = n-1;
            /* ... we do this whenever we change rows or columns */

            i++;    //Now from previous square, let's get one row down
            if (i == n)
                i = 0;
            mat[i][j] = count;
        }

        i--; j++;   //Row decreases (goes upwards), Column increases (goes rightwards)

        if (i == -1)    //When we hit the top (first row)... go to the bottom (last row)
            i = n-1;
        if (j == n)     //When we hit the rightmost (last column)... go to the left (first column)
            j = 0;
        count++;
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            printf("%5d", mat[i][j]);
        printf("\n");
    }
}

