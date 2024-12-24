#include <stdio.h>

int main() {
    int arr[100];
    int size, value, index;

    printf("nhap so luong phan tu trong mang (max 100): ");
    scanf("%d", &size);

    if (size > 100 || size <= 0) {
        printf("ko hop le!\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("mang sau khi nhap:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("nhap gia tri can them: ");
    scanf("%d", &value);
    printf("nhap vi tri muon them (0 den %d): ", size);
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("ko hop le.\n");
        return 1;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[index] = value; 
    size++; 

    printf("mang sau khi them:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
