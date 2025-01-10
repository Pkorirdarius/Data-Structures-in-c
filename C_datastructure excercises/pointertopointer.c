// Pointer to pointer
#include <stdio.h>

int main() {
    int rows = 3, columns = 4;
    int arr[rows][columns];
    int i, j;
    // datatype arrayName[rowSize][columnSize]; 2D array syntax
    // Input values into the 2D array
    printf("Enter values for the 2D array (%d rows x %d columns):\n", rows, columns);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the 2D array
    printf("\nThe 2D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
