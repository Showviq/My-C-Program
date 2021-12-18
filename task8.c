#include <stdio.h>

#define N 5 //Number of STUDENTS
#define M 5 //Number of SUBJECTS
int main(){
    /*N ROWS because N Students,
        M COLUMNS because M Subjects
            also, M low scores for M SUBJECTS*/
    int rowSums[N], colSums[M], lowScores[M];

    int i, j, x;
    double avg;

    //INITIALIZATION
    for (i = 0; i < N; i++)
            rowSums[i] = 0;
    for (i = 0; i < M; i++){
        colSums[i] = 0;
        lowScores[i] = -1;  //We put -1 in low scores because otherwise, it will be always be 0
    }


    for (i = 0; i < N; i++){
        //NUMBERS OF i'th student
        printf("Enter row %d: ", i+1);
        for (j = 0; j < M; j++){
            scanf("%d", &x);    //NUMBER OF i'th student of j'th subject

            rowSums[i] += x;    //UPDATE THE SUMS OF i'th ROW & j'th COLUMN
            colSums[j] += x;

            if (x < lowScores[j] || lowScores[j] < 0)   //UPDATE THE LOW SCORE of j'th SUBJECT
                lowScores[j] = x;
        }
        printf("\n");
    }

    printf("ROW TOTALS and AVERAGES:\n");
    for (i = 0; i < N; i++){
        /*  Row average = average number of a single student = TOTAL number of that student/ #of subjects(M)  */
        avg = (double)rowSums[i]/M;
        printf("Student #%d: Total= %d, Avg= %.2lf\n", i+1, rowSums[i], avg);
    }

    printf("COLUMN TOTALS and AVERAGES:\n");
    for (i = 0; i < M; i++){
        /*  Column average = average number of a different subjects = TOTAL number in that subject/ #of students(N)  */
        avg = (double)colSums[i]/N;
        printf("Subject #%d: Total= %d, Avg= %.2lf, Lowest= %d\n", i+1, colSums[i], avg, lowScores[i]);
    }
}

