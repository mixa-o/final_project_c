#include "../include/lab6.h"
#include <stdio.h>
#include <locale.h>
#define SIZE 4

void run_lab6_main(void) {
    setlocale(LC_ALL, "Rus");
    int x[SIZE][SIZE]; int sum_above = 0; int sum_below = 0; int i, j;
    printf("\n--- Лаба 6: Основное задание ---\n");
    printf("Введите элементы массива %dx%d:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            while (scanf("%d", &x[i][j]) != 1) {
                printf("Ошибка! [%d][%d]: ", i, j);
                while (getchar() != '\n');
            }
        }
    }
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (j > i) sum_above += x[i][j];
            else if (i > j) sum_below += x[i][j];
        }
    }
    if (sum_above < sum_below) {
        for (i = 0; i < SIZE; i++) {
            for (j = i + 1; j < SIZE; j++) x[i][j] = 0;
        }
    } else {
        for (i = 1; i < SIZE; i++) {
            for (j = 0; j < i; j++) x[i][j] = 0;
        }
    }
    printf("\nРезультат:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) printf("%4d ", x[i][j]);
        printf("\n");
    }
}
