//
// Created by Ngoc Anh on 14/04/2026.
//
#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // Toán tử số học
    printf("Cong: %d\n", a + b);
    printf("Tru: %d\n", a - b);
    printf("Nhan: %d\n", a * b);
    printf("Chia: %d\n", a / b);
    printf("Chia du: %d\n", a % b);

    // Tăng giảm
    printf("a++: %d\n", a++);
    printf("++a: %d\n", ++a);

    // So sánh
    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);

    // Logic
    printf("(a > 5 && b < 5): %d\n", (a > 5 && b < 5));

    return 0;
}