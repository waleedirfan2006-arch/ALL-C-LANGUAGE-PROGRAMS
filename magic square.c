#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n], i, j, sumRow, sumCol, sumDiag1 = 0, sumDiag2 = 0, magic = 1;

    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int magicSum = 0;
    for (j = 0; j < n; j++)
        magicSum += a[0][j];

    for (i = 0; i < n; i++) {
        sumRow = sumCol = 0;
        for (j = 0; j < n; j++) {
            sumRow += a[i][j];
            sumCol += a[j][i];
        }
        if (sumRow != magicSum || sumCol != magicSum)
            magic = 0;
    }

    for (i = 0; i < n; i++) {
        sumDiag1 += a[i][i];
        sumDiag2 += a[i][n - i - 1];
    }
    if (sumDiag1 != magicSum || sumDiag2 != magicSum)
        magic = 0;

    if (magic)
        printf("It is a Magic Square.\n");
    else
        printf("Not a Magic Square.\n");

    return 0;
}
