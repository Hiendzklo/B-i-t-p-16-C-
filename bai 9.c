#include <stdio.h>

// Ham them phan tu vao mang
void insertElement(int *arr, int *size, int value, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    // Dich chuyen cac phan tu tu vi tri can them
    for (int i = *size; i > position; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    // Chen gia tri moi vao vi tri can them
    *(arr + position) = value;
    // Tang kich thuoc mang
    (*size)++;
}
// Ham in mang
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int numbers[100] = {10, 20, 30, 40, 50}; 
    int size = 5; 

    printf("Mang ban dau: ");
    printArray(numbers, size);

    insertElement(numbers, &size, 25, 2); // Them gia tri 25 vào vi tri thu 2

    printf("Mang sau khi them: ");
    printArray(numbers, size);
}

