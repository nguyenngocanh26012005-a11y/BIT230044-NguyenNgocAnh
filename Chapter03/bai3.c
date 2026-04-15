//
// Created by Ngoc Anh on 15/04/2026.
//
#include <stdio.h>

int main() {
    int x = 10;

    printf("x ngoai: %d\n", x);

    {
        int x = 20;
        printf("x trong: %d\n", x);
    }

    printf("x ngoai sau block: %d\n", x);

    return 0;
}