#include <stdio.h>

// Ham cap nhat gia tri cua mot phan tu trong mang
void updateElement(int *arr, int size, int newValue, int position) {
    if (position < 0 || position >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    *(arr + position) = newValue; // Cap nhat gia tri moi vao vi tri chi dinh
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Tinh so phan tu cua mang

    printf("Mang ban dau: ");
    printArray(numbers, size);
    // Goi ham cap nhat phan tu
    updateElement(numbers, size, 99, 2); // Cap nhat gia tri 99 vao vi tri thu 2

    printf("Mang sau khi cap nhat: ");
    printArray(numbers, size);
}

