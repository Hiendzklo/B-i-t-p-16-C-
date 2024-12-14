#include <stdio.h>
#include <string.h>

void reverseString(char *input, char *output) {
    int length = strlen(input); // Ðo dai chuoi input
    for (int i = 0; i < length; i++) {
        *(output + i) = *(input + length - 1 - i); // Ðao nguoc cac ky tu
    }
    *(output + length) = '\0'; // Them ky tu ket thuc chuoi
}

int main() {
    char inputString[100];  
    char reverseStringOutput[100]; 

    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    reverseString(inputString, reverseStringOutput);

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseStringOutput);
}

