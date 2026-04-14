//
// Created by Ngoc Anh on 14/04/2026.
//
#include <stdio.h>

int main() {
    int x;

    printf("Nhap so: ");
    scanf("%d", &x);

    if (x >= 10 && x <= 50) {
        printf("Nam trong khoang 10-50\n");
    } else {
        printf("Khong nam trong khoang\n");
    }

    return 0;
}