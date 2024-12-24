#include <stdio.h>

int main() {
    int arr[100];
    int size = 0;
    int choice, value, index;

    do {
        printf("\nMENU\n");
        printf("1. nhap vao mang\n");
        printf("2. hien phan tu\n");
        printf("3. them phan tu\n");
        printf("4. sua phan tu\n");
        printf("5. xoa phan tu\n");
        printf("6. out\n");
        printf("lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("nhap so luong phan tu: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("mang hien tai: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("nhap phan tu can them: ");
                scanf("%d", &value);
                arr[size] = value;
                size++;
                break;
            case 4:
                printf("nhap phan tu can sua (0 den %d): ", size - 1);
                scanf("%d", &index);
                if (index >= 0 && index < size) {
                    printf("nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[index] = value;
                } else {
                    printf("ko hop le.\n");
                }
                break;
            case 5:
                printf("nhap phan tu can xoa (0 den %d): ", size - 1);
                scanf("%d", &index);
                if (index >= 0 && index < size) {
                    for (int i = index; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                } else {
                    printf("chi so ko hop le.\n");
                }
                break;
            case 6:
                printf("thoat chuong trinh.\n");
                break;
            default:
                printf("ko hop le.\n");
                break;
        }
    } while (choice != 6);

    return 0;
}
