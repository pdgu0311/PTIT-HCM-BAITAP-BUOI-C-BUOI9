#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    int numElements, i, deleteIndex;

    printf("nhap phan tu muon nhap toi da %d: ", MAX_SIZE);
    scanf("%d", &numElements);

    if (numElements < 0 || numElements > MAX_SIZE) {
        printf("ko hop le!\n");
        return 1;
    }

    for (i = 0; i < numElements; i++) {
        printf("nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    currentLength = numElements;

    printf("nhap vi tri can xoa (0-%d): ", currentLength - 1);
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("ko hop le!\n");
        return 1;
    }

    for (i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }

    currentLength--; 

    printf("mang sau khi xoa:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
