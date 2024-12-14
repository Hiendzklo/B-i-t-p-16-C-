#include <stdio.h>

// Ham them phan tu vao mang tai vi tri chi dinh
void insertElement(int *arr, int size, int value, int position) {
    // Kiem tra neu vi tri hop le
    if (position < 0 || position > size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    // Dich chuyen cac phan tu ve phía sau de tao khoang trong tai vi tri can them
    for (int i = size; i > position; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    // Them gia tri moi vao vi tri chi dinh
    *(arr + position) = value;
    // In thong bao sau khi them
    printf("Da them gia tri %d vao vi tri %d.\n", value, position);
}
// Ham in mang
void printArray(int *arr, int size) {
    printf("Mang hien tai: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int numbers[20] = {10, 20, 30, 40, 50};
    int size = 5; 

    printArray(numbers, size);

    int valueToAdd = 25;
    int positionToAdd = 2; // Them o vi tri chi so 2
    insertElement(numbers, size, valueToAdd, positionToAdd);

    size++; 
    printArray(numbers, size);
}

