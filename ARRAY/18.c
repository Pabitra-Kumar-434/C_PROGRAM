// C Program to Sort the 2D Array Across Rows

#include <stdio.h>

void sortRows(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
}

void printArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[3][3] = {
        {9, 2, 7},
        {4, 6, 1},
        {8, 3, 5}
    };

    sortRows(arr, 3, 3);

    printf("Sorted 2D array across rows:\n");
    printArray(arr, 3, 3);

    return 0;
}
