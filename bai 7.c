#include <stdio.h>

// Ham sap xep mang theo thu tu tang dan
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                // Hoan doi gia tri neu phan tu thu i lon hon phan tu thu j
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

// Ham in mang
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int numbers[] = {5, 2, 8, 4, 1, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Tinh so phan tu cua mang

    printf("Mang ban dau: ");
    printArray(numbers, size);

    sortArray(numbers, size);

    printf("Mang sau khi sap xep: ");
    printArray(numbers, size);
}

