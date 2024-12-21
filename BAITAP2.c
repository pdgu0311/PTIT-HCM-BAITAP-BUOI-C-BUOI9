#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i, position, newValue;

    printf("nhap phan tu cua mang: ");
    scanf("%d", &n);

    printf("nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("nhap vi tri can sua (0-%d): ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("ko hop le!\n");
        return 1;
    }

    printf("nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[position] = newValue;

    printf("mang sau khi sua:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
