#include <stdio.h>

int main() {
    int number = 100;
    int *ptr = &number;

    printf("Gia tri cua number: %d\n", number);
    printf("Dia chi cua number: %p\n", (void*)&number);
    printf("Gia tri cua number thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua number thong qua con tro: %p\n", (void*)ptr);
}

