#include "../include/lab1.h"
#include <stdio.h>

void run_lab1_main(void) {
    float v1, v2, t, s;
    printf("\n--- Лаба 1: Основное задание ---\n");
    printf("v1 (km/h) = ");
    scanf("%f", &v1);
    printf("v2 (km/h) = ");
    scanf("%f", &v2);
    printf("t (sec) = ");
    scanf("%f", &t);
    if (t > 0 && v1 >= v2 && v2 >= 0) {
        s = ((v1 + v2) / 2) * (t / 3600);
        printf("Distance = %f km\n", s);
    } else {
        printf("Error: Incorrect data. Please check: v1, v2 and t.\n");
    }
}

float calculate_path(float v1, float v2, float t) {
    // Теперь проверяем, что время положительное, скорости неотрицательные И v1 >= v2
    if (t > 0 && v1 >= v2 && v2 >= 0) {
        return ((v1 + v2) / 2.0) * (t / 3600.0);
    } else {
        return -1.0f; // Возвращаем ошибку, если самолет разгоняется
    }
}

void run_lab1_additional(void) {
    float v1, v2, t, s;
    printf("\n--- Лаба 1: Дополнительное задание ---\n");
    printf("v1 (km/h) = ");
    scanf("%f", &v1);
    printf("v2 (km/h) = ");
    scanf("%f", &v2);
    printf("t (sec) = ");
    scanf("%f", &t);
    s = calculate_path(v1, v2, t);
    if (s != -1.0f) {
        printf("Distance = %f km\n", s);
    } else {
        printf("Error: Incorrect data. Please check: v1, v2 and t.\n");
    }
}
