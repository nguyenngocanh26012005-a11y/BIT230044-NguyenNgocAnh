//
// Created by Ngoc Anh on 15/04/2026.
//
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    // if lồng nhau (cũ)
    /*
    if (a > 0) {
        if (b > 0) {
            if (c > 0) {
                printf("Tat ca deu duong\n");
            }
        }
    }
    */

    // viết lại gọn
    if (a > 0 && b > 0 && c > 0) {
        printf("Tat ca deu duong\n");
    } else {
        printf("Khong phai tat ca deu duong\n");
    }

    return 0;
}