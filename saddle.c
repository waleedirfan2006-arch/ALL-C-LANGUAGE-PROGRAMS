#include <stdio.h>

int main() {
    int i, j, k;
    int rows, cols;
    int a[10][10];   

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // input matrix
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int found = 0;

    for (i = 0; i < rows; i++) {
        int min = a[i][0];
        int colIndex = 0;

        for (j = 1; j < cols; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                colIndex = j;
            }
        }

        int isSaddle = 1;
        for (k = 0; k < rows; k++) {
            if (a[k][colIndex] > min) {
                isSaddle = 0;
                break;
            }
        }

        if (isSaddle == 1) {
            printf("Saddle point = %d (row %d, column %d)\n", min, i, colIndex);
            found = 1;
        }
    }

    if (found == 0)
        printf("No saddle point found\n");

    return 0;
}
