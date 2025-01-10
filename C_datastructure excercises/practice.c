// there are 2 approaches 
// Approach 1 :passing the 2d array directly
#include <stdio.h>
#include <stdlib.h>

// ** uncomment the first approach to use it **
// // Function to print a 2D array
// void printArray(int rows, int cols, int arr[rows][cols]) {
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             printf("%3d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int array2D[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     printf("Contents of array2D:\n");
//     printArray(3, 4, array2D);

//     // Access and edit individual elements
//     array2D[0][0] = 100; // Change the element at (0, 0) to 100

//     printf("\nModified array2D:\n");
//     printArray(3, 4, array2D);

//     return 0;
// }
// Approach 2: using dynamic memory allocation


// Function to print a 2D array
void printArray(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 4;

    // Allocate memory for the array of pointers
    int **array2D = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; ++i) {
        array2D[i] = (int *)malloc(cols * sizeof(int));
    }

    // Initialize the array
    int count = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array2D[i][j] = count++;
        }
    }

    printf("Contents of array2D:\n");
    printArray(array2D, rows, cols);

    // Access and edit individual elements
    array2D[0][0] = 100; // Change the element at (0, 0) to 100

    printf("\nModified array2D:\n");
    printArray(array2D, rows, cols);

    // Free the allocated memory
    for (int i = 0; i < rows; ++i) {
        free(array2D[i]);
    }
    free(array2D);

    return 0;
}
// Both approaches are valid, but the first one is generally preferred for fixed-size arrays, 
// while the second one is more suitable for dynamic arrays.