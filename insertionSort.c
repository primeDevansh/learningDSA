#include <stdio.h>
#include <time.h>

void insertionSort(int* arr, int n) {
    for(int j = 1; j < n; j++) {
        int key = arr[j];
        int i = j - 1;
        while(i >= 0 && key < arr[i]) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
    return;
}

int main() {
    clock_t start, end;
    double cpuTimeUsed;
    int arr[] = {5, 9, 1, 4, -1, -2, -10, 5, 3, 6, 7, 1, 2, 3, 100, -31, 23, 45};
    int size = 18;

    //display original array
    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n\n");

    start = clock();
    insertionSort(arr, size);
    end = clock();

    cpuTimeUsed = ((double) end - start) / CLOCKS_PER_SEC;
    //convert to microseconds
    cpuTimeUsed *= 1000000;

    //display sorted array
    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");

    //display time taken
    printf("Time taken: %f µs\n", cpuTimeUsed);
    return 0;
}