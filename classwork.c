#include <stdio.h>

int main() {
    int arr1[] = {2, 4, 7};
    int arr2[] = {4, 9, 1};
    int result[3]; // Use a fixed size since arrays have three elements
    int size = sizeof(arr1) / sizeof(arr1[0]); // Calculate size of the array

    // Adding arrays using pointers
    for (int i = 0; i < size; i++) {
        *(result + i) = *(arr1 + i) + *(arr2 + i);
    }

    // Print the result
    printf("Resultant array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(result + i));
    }

    return 0;
}
