#include <stdio.h>
void sumRowsCols(int matrix[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < col; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        printf("Row %d sum: %d\n", i, rowSum);
        printf("Column %d sum: %d\n", i, colSum);
    }
}
int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sumRowsCols(matrix, 3, 3);
    return 0;
}