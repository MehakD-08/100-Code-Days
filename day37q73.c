
//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
    
    int rows, cols;
    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int rowSum[rows];

    printf("Enter elements of Matrix (%d x %d) in row-major order: \n",rows,cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;  
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("The sum of each row elements are : ");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
