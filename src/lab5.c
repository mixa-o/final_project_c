#include "../include/lab5.h"
#include <stdio.h>
#include <locale.h>
#define N 10

void run_lab5_main(void) {
    int x[N]; int max_val, max_idx, i;
    printf("\n--- Лаба 5: Основное задание ---\n");
    printf("Enter 10 numbers separated by spaces and press Enter:\n");
    for (i = 0; i < N; i++) {
        if (scanf("%d", &x[i]) != 1) return;
    }
    max_val = x[0]; max_idx = 0;
    for (i = 1; i < N; i++) {
        if (x[i] > max_val) { max_val = x[i]; max_idx = i; }
    }
    for (i = 0; i < N; i++) {
        if (i < max_idx) x[i] = 0;
        else if (i > max_idx) x[i] = max_val;
    }
    printf("\nProcessing result:\n");
    for (i = 0; i < N; i++) printf("%d ", x[i]);
    printf("\n");
}

void analyzeMemory(int *arr, int n, size_t total_size) {
    printf("\n--- Дополнительное задание (Анализ памяти) ---\n");
    printf("1. Размер одного элемента (int): %zu байт\n", sizeof(arr[0]));
    printf("2. Общий размер массива в памяти: %zu байт\n", total_size);
    printf("\n3. Схема расположения элементов:\n");
    printf("Индекс\tАдрес в памяти\t\tСмещение\n");
    for (int i = 0; i < n; i++) {
        long offset = (long)&arr[i] - (long)&arr[0];
        printf("x[%d]\t%p\t+%ld байт\n", i, (void*)&arr[i], offset);
    }
}

void run_lab5_additional(void) {
    int x[N] = {1, 2, 3, 10, 4, 5, 6, 7, 8, 9};
    int max_val, max_idx, i;
    max_val = x[0]; max_idx = 0;
    for (i = 1; i < N; i++) {
        if (x[i] > max_val) { max_val = x[i]; max_idx = i; }
    }
    for (i = 0; i < N; i++) {
        if (i < max_idx) x[i] = 0;
        else if (i > max_idx) x[i] = max_val;
    }
    analyzeMemory(x, N, sizeof(x));
}
