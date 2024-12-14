#include <stdio.h>

// Ham tim kiem gia tri trong mang
int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i; // Tra ve vi tri neu tim thay
        }
    }
    return -1; // Tra ve -1 neu khong tim thay
}

int main() {
    int numbers[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Tinh so phan tu cua mang
    int value = 7; // Gia tri can tim

    int position = findElement(numbers, size, value);

    if (position != -1) {
        printf("Gia tri %d duoc tim thay o vi tri %d\n", value, position);
    } else {
        printf("Gia tri %d khong co trong mang\n", value);
    }
}

