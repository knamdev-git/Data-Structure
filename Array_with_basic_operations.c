#include <stdio.h>
#include <stdlib.h>

// Function to perform linear search
int linear_search(int data, int arr[], int size) {
    printf("\nIn linear_search: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] == data) {
            printf("\n\"%d\" Element found at position \"%d\" ", data, i + 1);
            return i;
        }
    }
    printf("\nElement not found ");
    return -1; // Return -1 if element not found
}

// Function to insert element at given position
void insert(int data, int arr[], int pos, int size) {
    if (pos < 0 || pos >= size) {
        printf("Invalid position %d for element %d\n", pos, data);
    } else {
        arr[pos] = data;
    }
}

// Function to print array elements
void print_arr(int arr[], int size) {
    printf("\nPrinting Total elements: %d\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// Function to delete element at given position
void delete_element(int pos, int arr[], int size) {
    printf("\n\nDeletion in array:");
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    print_arr(arr, size - 1); // Print array after deletion
}

// Function to merge two sorted arrays
void merging(int a[], int b[], int size1, int size2) {
    int *c = (int*)malloc((size1 + size2) * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < size1) {
        c[k++] = a[i++];
    }
    while (j < size2) {
        c[k++] = b[j++];
    }
    printf("\nMerged array:");
    print_arr(c, size1 + size2);
    free(c); // Free dynamically allocated memory
}

// Main function
int main() {
    int arr[8] = {0}; // Initialize array with zeros

    // Insert elements into the array
    insert(1, arr, 5, 8);
    insert(7, arr, 3, 8);
    insert(6, arr, 4, 8);
    insert(2, arr, 2, 8);
    insert(4, arr, 1, 8);
    insert(3, arr, 0, 8);

    // Print array
    print_arr(arr, 8);

    // Perform linear search
    linear_search(7, arr, 8);

    // Delete element at position 1
    delete_element(1, arr, 8);

    // Declare and initialize another array
    int brr[9] = {0};
    insert(10, brr, 5, 9);
    insert(70, brr, 3, 9);
    insert(60, brr, 4, 9);
    insert(20, brr, 2, 9);
    insert(40, brr, 1, 9);
    insert(30, brr, 0, 9);

    // Print second array
    printf("\nPrinting Second array ");
    print_arr(brr, 9);

    // Merge two arrays
    merging(arr, brr, 8, 9);

    return 0;
}
