#include "../include/lab2.h"
#include <stdio.h>

void run_lab2_main(void) {
    float s, a, x;
    int n, i;
    printf("\n--- Лаба 2: Основное задание ---\n");
    printf("n=");
    if (scanf("%d", &n) != 1 || n <= 0) return;
    printf("x=");
    if (scanf("%f", &x) != 1) return;
    s = 1.0; a = 1.0; i = 1;
    while(i < n) {
        a = a * x / i;
        s = s + a;
        i = i + 1;
    }
    printf("s = %f\n", s);
}

float calculate_series(float x, int n) {
    float s = 1.0; float a = 1.0; int i = 1;
    if (n > 1) {
        do {
            a = a * x / i;
            s = s + a;
            if (s >= 10.0) {
                printf("(Цикл прерван по break: s >= 10)\n");
                break;
            }
            i = i + 1;
        } while (i < n);
    }
    return s;
}

void run_lab2_additional(void) {
    float x, result;
    int n;
    printf("\n--- Лаба 2: Дополнительное задание ---\n");
    printf("n=");
    if (scanf("%d", &n) != 1 || n <= 0) return;
    printf("x=");
    if (scanf("%f", &x) != 1) return;
    result = calculate_series(x, n);
    printf("s = %f\n", result);
}
