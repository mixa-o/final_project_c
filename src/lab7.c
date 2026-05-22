#include "../include/lab7.h"
#include <stdio.h>
#include <locale.h>

void run_lab7_main(void) {
    setlocale(LC_ALL, "Russian");
    unsigned long N_val; unsigned char b0, b1, b2, b3; int diff;
    printf("\n--- Лаба 7: Основное задание ---\n");
    printf("N = ");
    if (scanf("%lx", &N_val) != 1) { printf("Ошибка ввода\n"); return; }
    b0 = (unsigned char)(N_val & 0xFF);
    b1 = (unsigned char)((N_val >> 8) & 0xFF);
    b2 = (unsigned char)((N_val >> 16) & 0xFF);
    b3 = (unsigned char)((N_val >> 24) & 0xFF);
    printf("Байты числа: B3=%02X, B2=%02X, B1=%02X, B0=%02X\n", b3, b2, b1, b0);
    diff = b1 - b0;
    if ((b2 - b1 == diff) && (b3 - b2 == diff)) {
        printf("Результат: Составляют арифметическую прогрессию (шаг = %d)\n", diff);
    } else {
        printf("Результат: Не составляют арифметическую прогрессию\n");
    }
}
