//
// Created by Ngoc Anh on 14/04/2026.
//
#include <stdio.h>

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 50)
        printf("n nam trong khoang [10, 50]\n");
    else
        printf("n KHONG nam trong khoang [10, 50]\n");

    return 0;
}