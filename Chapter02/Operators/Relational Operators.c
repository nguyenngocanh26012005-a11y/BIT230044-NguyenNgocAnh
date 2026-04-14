#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if (a > b)
        printf("a > b\n");
    else if (a < b)
        printf("a < b\n");
    else
        printf("a = b\n");

    return 0;
}//
// Created by Ngoc Anh on 14/04/2026.
//
