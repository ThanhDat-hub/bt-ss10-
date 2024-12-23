#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int phanTu, vitri;

    printf("Nhap phan tu: ");
    scanf("%d", &phanTu);

    int timThay = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == phanTu) {
            vitri = i;
            timThay = 1;
            break;
        }
    }

    if (timThay) {
        printf("Phan tu %d o vi tri %d.\n", phanTu, vitri);
    } else {
        printf("Phan tu %d khong ton tai.\n", phanTu);
    }

    return 0;
}
