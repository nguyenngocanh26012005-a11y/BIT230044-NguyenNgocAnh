//
// Created by Ngoc Anh on 14/04/2026.
//
#include <stdio.h>

int main() {
    int a;
    printf("Nhap so nguyen: ");
    scanf("%d", &a);

    float b = (float)a;
    printf("Ep sang float: %.2f\n", b);

    float x;
    printf("Nhap so thuc: ");
    scanf("%f", &x);

    int y = (int)x;
    printf("Ep sang int: %d\n", y);

    return 0;
}