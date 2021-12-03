// Optimized implementation of Bubble sort
// verified
#include <stdio.h>

#include <stdbool.h>

void swap(int * xp, int * yp) {
    int temp = * xp;
    * xp = * yp;
    * yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap( & arr[i], & arr[j]);
                swapped = true;
            }
        }
        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

/* Function to print an array */
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

// Driver program to test above functions
int main() {
    int i, n, arr[20];
    printf("Enter size of the array: ");
    scanf("%d", & n);
    printf("\nEnter the numbers:\n");
    for (i = 0; i < n; i++) {
        printf("\narr[%d]: ", i);
        scanf("%d", & arr[i]);
    }

    // int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);
    return 0;
}
