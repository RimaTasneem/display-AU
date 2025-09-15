#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100], n = 10, i, j, count;
    printf("Generated Numbers:\n");
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 10 + 1; 
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n\nSorted Numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nFrequency Distribution:\n");
    i = 0;
    while (i < n) {
        count = 1;
        while (i + 1 < n && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        printf("%d -> %d times\n", arr[i], count);
        i++;
    }

    return 0;
}

