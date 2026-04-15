//
// Created by Ngoc Anh on 15/04/2026.
//
#include <stdio.h>

// Không static
void increment1() {
    int counter = 0;
    counter++;
    printf("Non-static counter: %d\n", counter);
}

// Có static
void increment2() {
    static int counter = 0;
    counter++;
    printf("Static counter: %d\n", counter);
}

int main() {
    printf("Goi increment1:\n");
    increment1();
    increment1();
    increment1();

    printf("\nGoi increment2:\n");
    increment2();
    increment2();
    increment2();

    return 0;
}