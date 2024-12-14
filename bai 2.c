#include <stdio.h>

// Ham hoan doi gia tri cua hai bien su dung con tro
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;        
    *b = temp;     
}

int main() {
    int x = 5, y = 10;
    printf("Truoc khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
}

