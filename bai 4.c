#include <stdio.h>

// Ham in tat ca cac phan tu trong mang
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Tinh so phan tu cua mang

    printf("Cac phan tu trong mang:\n");
    printArray(numbers, size);
}

