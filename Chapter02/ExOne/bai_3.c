//
// Created by Ngoc Anh on 14/04/2026.
//
#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Cong: %d\n", a + b);
    printf("Tru: %d\n", a - b);
    printf("Nhan: %d\n", a * b);
    printf("Chia: %d\n", a / b);
    printf("Chia du: %d\n", a % b);

    return 0;
}