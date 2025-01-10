// Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
// Importation of calloc and malloc for dynamic memory allocation
// And realloc for dynamic memory realocation and free for memory dealocation
int main() {
    int n, i;
    int *ptr;
    int max, min;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }

    // Display the values in the array
    printf("\nThe values entered in the array are: \n");
    for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
    }
    printf("\n");

    // Initialize max and min with the first element
    max = min = ptr[0];

    // Finding the maximum and minimum values in the array
    for (i = 1; i < n; ++i) {
        if (ptr[i] > max) {
            max = ptr[i];
        }
        if (ptr[i] < min) {
            min = ptr[i];
        }
    }

    // Display the maximum and minimum values
    printf("The Maximum Number is: %d\n", max);
    printf("The Minimum Number is: %d\n", min);

    // De-allocation of dynamic memory
    free(ptr);

    return 0;
}